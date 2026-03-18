/*
 * XREFs of sub_1400FD880 @ 0x1400FD880
 * Callers:
 *     sub_1406B0A34 @ 0x1406B0A34 (sub_1406B0A34.c)
 * Callees:
 *     WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x1400FDBF0 (WarbirdCrypto--CCipherFeistel64--CallRoundFunction.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall sub_1400FD880(
        __int64 a1,
        const void *a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _BYTE *a7)
{
  unsigned int v7; // r13d
  char *v8; // r12
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // ebx
  unsigned int v17; // esi
  unsigned int v18; // r14d
  int v19; // ebx
  __int64 v20; // rsi
  __int64 v21; // rbx
  int *v22; // rdx
  unsigned int v23; // eax
  int v24; // r14d
  int v25; // r13d
  signed __int64 v26; // r12
  int v27; // r15d
  size_t v28; // rbx
  unsigned int v29; // r14d
  unsigned int v30; // esi
  int v31; // eax
  int v32; // r14d
  unsigned int v33; // r15d
  unsigned int v34; // esi
  unsigned int v35; // r14d
  unsigned int v36; // r15d
  unsigned int v37; // esi
  unsigned int v38; // r15d
  int v39; // eax
  int *v40; // rdx
  bool v41; // zf
  size_t v42; // [rsp+20h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-30h]
  __int64 Src; // [rsp+30h] [rbp-28h] BYREF
  int *v45; // [rsp+38h] [rbp-20h]
  __int64 v46; // [rsp+40h] [rbp-18h]
  __int64 v47; // [rsp+A0h] [rbp+48h]

  if ( a4 )
  {
    v47 = a1;
    Src = 0LL;
    LODWORD(v42) = ~a6;
    v7 = a4;
    LODWORD(Size) = a4 & 7;
    v8 = a3;
    if ( (a4 & 7) != 0 )
    {
      v10 = ~a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, a6);
      v11 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 8LL, a5, v10);
      v12 = v10 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 7LL, a5, v11);
      v13 = v11 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 6LL, a5, v12);
      v14 = v12 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 5LL, a5, v13);
      v15 = v13 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 4LL, a5, v14);
      v16 = v14 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 3LL, a5, v15);
      v17 = v15 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 2LL, a5, v16);
      v18 = v16 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 1LL, a5, v17);
      v42 = 0LL;
      v19 = v17 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 0LL, a5, v18);
      v20 = (unsigned int)Size;
      memmove(&v42, a2, (unsigned int)Size);
      LODWORD(Src) = v42 ^ v18;
      Size = v42;
      HIDWORD(Src) = HIDWORD(v42) ^ v19;
      v21 = (unsigned int)v20;
      memset((char *)&Src + v20, 0, (unsigned int)(8 - v20));
      memmove(v8, &Src, (unsigned int)v20);
      a1 = v47;
      a6 = HIDWORD(Size);
      LODWORD(v42) = Size;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = (int *)&v8[v21];
    v23 = v7 >> 3;
    v45 = (int *)&v8[v21];
    if ( v7 >> 3 )
    {
      v24 = HIDWORD(Src);
      v25 = v42;
      v26 = (_BYTE *)a2 - v8;
      v27 = Src;
      v46 = v23;
      while ( 1 )
      {
        v28 = *(_QWORD *)((char *)v22 + v26);
        v29 = HIDWORD(v28) ^ v24;
        LODWORD(v42) = v28 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, v29) ^ v27;
        v30 = v29 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 8LL, a5, (unsigned int)v42);
        v31 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 7LL, a5, v30);
        v32 = v42 ^ v31;
        v33 = v30 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 6LL, a5, (unsigned int)v42 ^ v31);
        v34 = v32 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 5LL, a5, v33);
        v35 = v33 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 4LL, a5, v34);
        v36 = v34 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 3LL, a5, v35);
        v37 = v35 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 2LL, a5, v36);
        v38 = v36 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 1LL, a5, v37);
        LODWORD(v42) = v38;
        v39 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v47, 0LL, a5, v38);
        v40 = v45;
        v27 = v25 ^ v38;
        Size = v28;
        v24 = a6 ^ v37 ^ v39;
        *v45 = v27;
        v40[1] = v24;
        v22 = v40 + 2;
        v41 = v46-- == 1;
        v45 = v22;
        if ( v41 )
          break;
        v25 = v28;
        a1 = v47;
        a6 = HIDWORD(Size);
      }
      v7 = a4;
      v8 = a3;
    }
    *a7 = v8[v7 - 1];
  }
}
