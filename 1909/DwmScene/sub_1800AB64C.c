/*
 * XREFs of sub_1800AB64C @ 0x1800AB64C
 * Callers:
 *     sub_1800ADD00 @ 0x1800ADD00 (sub_1800ADD00.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800AB968 @ 0x1800AB968 (sub_1800AB968.c)
 *     sub_1800AC530 @ 0x1800AC530 (sub_1800AC530.c)
 *     sub_1800B2954 @ 0x1800B2954 (sub_1800B2954.c)
 *     sub_1800B2C7C @ 0x1800B2C7C (sub_1800B2C7C.c)
 */

unsigned __int64 __fastcall sub_1800AB64C(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 i; // r14
  unsigned __int64 v17; // [rsp+20h] [rbp-48h]

  v4 = a1[1];
  v5 = (v4 - *a1) / 48;
  v6 = a1[2] - *a1;
  result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v8 = v6 / 48;
  if ( a2 <= v6 / 48 )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
      {
        v15 = *a1 + 48 * a2;
        for ( i = v15; i != v4; i += 48LL )
          result = sub_1800AC530(i, 0LL);
        a1[1] = v15;
      }
    }
    else
    {
      v14 = a2 - v5;
      if ( v14 )
      {
        result = 0LL;
        do
        {
          *(_DWORD *)(v4 + 1) = 0;
          *(_WORD *)(v4 + 5) = 0;
          *(_BYTE *)(v4 + 7) = 0;
          *(_BYTE *)v4 = 1;
          *(_QWORD *)(v4 + 8) = 0LL;
          *(_QWORD *)(v4 + 16) = 0LL;
          *(_QWORD *)(v4 + 24) = 0LL;
          *(_QWORD *)(v4 + 32) = 0LL;
          *(_QWORD *)(v4 + 40) = 0LL;
          v4 += 48LL;
          --v14;
        }
        while ( v14 );
      }
      a1[1] = v4;
    }
  }
  else
  {
    if ( a2 > 0x555555555555555LL )
      std::vector<void *>::_Xlen();
    v9 = v8 >> 1;
    if ( v8 <= 0x555555555555555LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < a2 )
        v10 = a2;
    }
    else
    {
      v10 = a2;
    }
    v11 = sub_1800B2C7C(a1, v10);
    v12 = v11 + 48 * v5;
    v13 = a2 - v5;
    v17 = v12;
    if ( a2 != v5 )
    {
      do
      {
        *(_DWORD *)(v12 + 1) = 0;
        *(_WORD *)(v12 + 5) = 0;
        *(_BYTE *)(v12 + 7) = 0;
        *(_BYTE *)v12 = 1;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_QWORD *)(v12 + 24) = 0LL;
        *(_QWORD *)(v12 + 32) = 0LL;
        *(_QWORD *)(v12 + 40) = 0LL;
        v12 += 48LL;
        v17 = v12;
        --v13;
      }
      while ( v13 );
    }
    sub_1800AB968(*a1, a1[1], v11, a1, v17, a1, v10);
    return sub_1800B2954(a1, v11, a2, v10);
  }
  return result;
}
