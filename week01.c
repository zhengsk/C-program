//
// Created by 绍凯郑 on 2017/1/8.
//

#include <printf.h>
#include <stdbool.h>

bool isPrime(int num) {
    bool flag = true;
    for(int j = 2; j < num; j++) {
        if(num % j == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int getNextPrime(int num) {
    do{
        num += 1;
    }while(!isPrime(num));
    return num;
}

int main() {

    int n = 18;
    int prime = 1;

    printf("%d=", n);
    do{
        prime = getNextPrime(prime);
        while(n % prime == 0){
            printf("%d", prime);
            n = n / prime;
            if(n != 1) {
                printf("x");
            }
        }
    }while(n != 1);

    return 0;
}

