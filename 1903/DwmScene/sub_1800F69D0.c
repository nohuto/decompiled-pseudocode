/*
 * XREFs of sub_1800F69D0 @ 0x1800F69D0
 * Callers:
 *     sub_1800F72E4 @ 0x1800F72E4 (sub_1800F72E4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 *     sub_180031B90 @ 0x180031B90 (sub_180031B90.c)
 */

unsigned __int64 __fastcall sub_1800F69D0(__int64 *a1, char *a2, _OWORD *a3)
{
  char *v4; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  char *v12; // rdx
  unsigned __int64 v13; // r14
  char *v14; // rcx
  char *v15; // rax
  signed __int64 v16; // r8
  signed __int64 v17; // rcx
  signed __int64 v18; // rax

  v4 = a2;
  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = (char *)sub_18000F5BC((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  *(_OWORD *)&v12[v13] = *a3;
  v14 = (char *)a1[1];
  v15 = (char *)*a1;
  if ( v4 == v14 )
  {
    if ( v15 != v14 )
    {
      v16 = v12 - v15;
      do
      {
        *(_OWORD *)&v15[v16] = *(_OWORD *)v15;
        v15 += 16;
      }
      while ( v15 != v14 );
    }
  }
  else
  {
    if ( v15 != v4 )
    {
      v17 = v12 - v15;
      do
      {
        *(_OWORD *)&v15[v17] = *(_OWORD *)v15;
        v15 += 16;
      }
      while ( v15 != v4 );
      v14 = (char *)a1[1];
    }
    if ( v4 != v14 )
    {
      v18 = &v12[v13 + 16] - v4;
      do
      {
        *(_OWORD *)&v4[v18] = *(_OWORD *)v4;
        v4 += 16;
      }
      while ( v4 != v14 );
    }
  }
  sub_180031B90(a1, (__int64)v12, v8, v11);
  return v13 + *a1;
}
