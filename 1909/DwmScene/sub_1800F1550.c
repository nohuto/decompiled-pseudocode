/*
 * XREFs of sub_1800F1550 @ 0x1800F1550
 * Callers:
 *     sub_1800F31E8 @ 0x1800F31E8 (sub_1800F31E8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001B918 @ 0x18001B918 (sub_18001B918.c)
 *     sub_18001BB48 @ 0x18001BB48 (sub_18001BB48.c)
 */

__int64 __fastcall sub_1800F1550(__int64 *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  char *v12; // r10
  unsigned __int64 v13; // rax
  char *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  signed __int64 v17; // r9
  __int64 v18; // r11
  unsigned __int64 v19; // r8
  signed __int64 v20; // r9
  char *v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rsi

  v6 = (__int64)(a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = (char *)sub_18001BB48((__int64)a1, v11);
  *(_QWORD *)&v12[8 * v6] = *a3;
  v13 = a1[1];
  v14 = (char *)*a1;
  v15 = 0LL;
  if ( a2 == v13 )
  {
    v16 = (v13 - (unsigned __int64)v14 + 7) >> 3;
    if ( (unsigned __int64)v14 > v13 )
      v16 = 0LL;
    if ( v16 )
    {
      v17 = v12 - v14;
      do
      {
        *(_QWORD *)&v14[v17] = *(_QWORD *)v14;
        v14 += 8;
        ++v15;
      }
      while ( v15 != v16 );
    }
  }
  else
  {
    v18 = 0LL;
    v19 = (a2 - (unsigned __int64)v14 + 7) >> 3;
    if ( (unsigned __int64)v14 > a2 )
      v19 = 0LL;
    if ( v19 )
    {
      v20 = v12 - v14;
      do
      {
        *(_QWORD *)&v14[v20] = *(_QWORD *)v14;
        v14 += 8;
        ++v18;
      }
      while ( v18 != v19 );
      v13 = a1[1];
    }
    v21 = &v12[8 * v6 + 8];
    v22 = (v13 - a2 + 7) >> 3;
    if ( a2 > v13 )
      v22 = 0LL;
    if ( v22 )
    {
      v23 = a2 - (_QWORD)v21;
      do
      {
        *(_QWORD *)v21 = *(_QWORD *)&v21[v23];
        v21 += 8;
        ++v15;
      }
      while ( v15 != v22 );
    }
  }
  sub_18001B918(a1, (__int64)v12, v8, v11);
  return *a1 + 8 * v6;
}
