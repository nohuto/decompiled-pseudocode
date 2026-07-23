/*
 * XREFs of sub_14010CE30 @ 0x14010CE30
 * Callers:
 *     sub_140691C44 @ 0x140691C44 (sub_140691C44.c)
 * Callees:
 *     WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x14010D1E0 (WarbirdCrypto--CCipherFeistel64--CallRoundFunction.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall sub_14010CE30(
        __int64 a1,
        const void *a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _BYTE *a7)
{
  unsigned int v7; // r15d
  char *v8; // r12
  __int64 v10; // rsi
  int v11; // r13d
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // ebp
  unsigned int v18; // ebx
  unsigned int v19; // esi
  unsigned int v20; // ebp
  int v21; // ebx
  __int64 v22; // rsi
  int v23; // ebp
  int v24; // r14d
  __int64 v25; // rax
  int *v26; // rcx
  unsigned int v27; // eax
  signed __int64 v28; // r15
  unsigned int v29; // r12d
  __int64 v30; // rbx
  unsigned int v31; // ebp
  unsigned int v32; // r14d
  unsigned int v33; // esi
  unsigned int v34; // ebp
  unsigned int v35; // r14d
  unsigned int v36; // esi
  unsigned int v37; // ebp
  unsigned int v38; // r14d
  unsigned int v39; // esi
  unsigned int v40; // r14d
  int v41; // eax
  int *v42; // rcx
  bool v43; // zf
  unsigned int Size; // [rsp+20h] [rbp-68h] BYREF
  int Size_4; // [rsp+24h] [rbp-64h]
  __int64 v46; // [rsp+28h] [rbp-60h] BYREF
  int *v47; // [rsp+30h] [rbp-58h]
  __int64 v48; // [rsp+38h] [rbp-50h]

  if ( a4 )
  {
    Size = a4 & 7;
    v7 = a4;
    v8 = a3;
    v10 = a1;
    v11 = ~a6;
    if ( (a4 & 7) != 0 )
    {
      v12 = v11 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, a6);
      v13 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8LL, a5, v12);
      v14 = v12 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v13);
      v15 = v13 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v14);
      v16 = v14 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v15);
      v17 = v15 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v16);
      v18 = v16 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v17);
      v19 = v17 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v18);
      v20 = v18 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v19);
      v46 = 0LL;
      v21 = v19 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v20);
      v22 = Size;
      v48 = Size;
      memmove(&v46, a2, Size);
      Size = v46 ^ v20;
      Size_4 = HIDWORD(v46) ^ v21;
      memset((char *)&Size + v22, 0, (unsigned int)(8 - v22));
      memmove(v8, &Size, (unsigned int)v22);
      v23 = Size_4;
      v24 = Size;
      v11 = v46;
      v10 = a1;
      a6 = HIDWORD(v46);
      v25 = v48;
    }
    else
    {
      v24 = 0;
      v23 = 0;
      v25 = 0LL;
    }
    v26 = (int *)&v8[v25];
    v27 = v7 >> 3;
    v47 = v26;
    if ( v7 >> 3 )
    {
      v28 = (_BYTE *)a2 - v8;
      v29 = a6;
      v48 = v27;
      while ( 1 )
      {
        v30 = *(_QWORD *)((char *)v26 + v28);
        v31 = HIDWORD(v30) ^ v23;
        v32 = v30 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 9LL, a5, v31) ^ v24;
        Size = v32;
        v33 = v31 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 8LL, a5, v32);
        v34 = v32 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v33);
        v35 = v33 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v34);
        v36 = v34 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v35);
        v37 = v35 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v36);
        v38 = v36 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v37);
        v39 = v37 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v38);
        v40 = v38 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v39);
        Size = v40;
        v41 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v40);
        v42 = v47;
        v24 = v11 ^ v40;
        v46 = v30;
        v23 = v29 ^ v39 ^ v41;
        *v47 = v24;
        v42[1] = v23;
        v26 = v42 + 2;
        v43 = v48-- == 1;
        v47 = v26;
        if ( v43 )
          break;
        v29 = HIDWORD(v46);
        v11 = v30;
        v10 = a1;
      }
      v7 = a4;
      v8 = a3;
    }
    *a7 = v8[v7 - 1];
  }
}
