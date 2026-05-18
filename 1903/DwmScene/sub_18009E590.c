/*
 * XREFs of sub_18009E590 @ 0x18009E590
 * Callers:
 *     sub_18009E760 @ 0x18009E760 (sub_18009E760.c)
 * Callees:
 *     sub_18003107C @ 0x18003107C (sub_18003107C.c)
 *     sub_18009CF60 @ 0x18009CF60 (sub_18009CF60.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18009E590(__int64 *a1, int *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  int v8; // r14d
  int v9; // r8d
  int v10; // edx
  _DWORD *v11; // rdi
  __int64 i; // rcx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int v16; // [rsp+44h] [rbp-65h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-61h] BYREF
  int v18; // [rsp+50h] [rbp-59h]
  int v19; // [rsp+54h] [rbp-55h]
  _DWORD v20[13]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v21; // [rsp+8Ch] [rbp-1Dh]
  __int64 v22; // [rsp+94h] [rbp-15h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  int v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A4h] [rbp-5h]
  int v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+ACh] [rbp+3h]
  int v28; // [rsp+B0h] [rbp+7h]
  unsigned __int64 v29[8]; // [rsp+C0h] [rbp+17h] BYREF
  int v30; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int64 v31; // [rsp+120h] [rbp+77h] BYREF
  int v32; // [rsp+128h] [rbp+7Fh] BYREF

  v29[1] = -2LL;
  v5 = (a2[5] & 0x10) != 0 ? 6LL : 1LL;
  v6 = a3 / v5;
  v17 = a3 / v5;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  while ( 1 )
  {
    v30 = 0;
    v8 = a2[1];
    v9 = sub_18003107C(a2[4], *a2);
    v10 = 0;
    if ( a2[4] == 23 )
    {
      v14 = v8 + ((unsigned int)(v8 + 1) >> 1);
      goto LABEL_9;
    }
    v18 = 0;
    v19 = 1;
    v11 = v20;
    for ( i = 20LL; i; --i )
      *v11++ = 1;
    v26 = 4;
    v27 = 1;
    v28 = 1;
    v13 = *(&v18 + (unsigned int)a2[4]);
    v7 = v31;
    if ( v13 )
    {
      v14 = (v13 + v8 - 1) / v13;
LABEL_9:
      v10 = v9 * v14;
    }
    LODWORD(v31) = v10;
    v32 = sub_18003107C(a2[4], *a2);
    v18 = 0;
    v19 = 4;
    v20[0] = 4;
    v20[1] = 4;
    v20[2] = 8;
    v20[3] = 12;
    v20[4] = 16;
    v20[5] = 4;
    v20[6] = 4;
    v20[7] = 8;
    v20[8] = 12;
    v20[9] = 16;
    v20[10] = 2;
    v20[11] = 1;
    v20[12] = 2;
    v21 = 0x400000004LL;
    v22 = 0x400000004LL;
    v23 = 2;
    v24 = 4;
    v25 = 8;
    v26 = 4;
    v27 = 1;
    v28 = 2;
    v16 = *(&v18 + a2[4]);
    v29[0] = v6 * v7;
    sub_18009CF60(a1, v29, (__int64 *)&v17, &v16, &v32, (int *)&v31, &v30);
    v31 = ++v7;
    if ( v7 >= v5 )
      return a1;
    v6 = v17;
  }
}
