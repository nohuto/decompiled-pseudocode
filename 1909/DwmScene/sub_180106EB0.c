/*
 * XREFs of sub_180106EB0 @ 0x180106EB0
 * Callers:
 *     sub_180108188 @ 0x180108188 (sub_180108188.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 *     sub_180031CA0 @ 0x180031CA0 (sub_180031CA0.c)
 */

unsigned __int64 __fastcall sub_180106EB0(__int64 *a1, char *a2, _DWORD *a3, __int64 *a4)
{
  char *v6; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  char *v14; // r10
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  char *v17; // rcx
  char *v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rcx
  signed __int64 v21; // rax

  v6 = a2;
  v8 = (unsigned __int64)&a2[-*a1];
  v9 = (a1[1] - *a1) >> 4;
  if ( v9 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v10 = v9 + 1;
  v11 = (a1[2] - *a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v13 = v12 + v11;
    if ( v12 + v11 < v10 )
      v13 = v10;
  }
  else
  {
    v13 = v10;
  }
  v14 = (char *)sub_18000F60C((__int64)a1, v13);
  v15 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = *a4;
  *(_DWORD *)&v14[v15] = *a3;
  *(_QWORD *)&v14[v15 + 8] = v16;
  v17 = (char *)a1[1];
  v18 = (char *)*a1;
  if ( v6 == v17 )
  {
    if ( v18 != v17 )
    {
      v19 = v14 - v18;
      do
      {
        *(_OWORD *)&v18[v19] = *(_OWORD *)v18;
        v18 += 16;
      }
      while ( v18 != v17 );
    }
  }
  else
  {
    if ( v18 != v6 )
    {
      v20 = v14 - v18;
      do
      {
        *(_OWORD *)&v18[v20] = *(_OWORD *)v18;
        v18 += 16;
      }
      while ( v18 != v6 );
      v17 = (char *)a1[1];
    }
    if ( v6 != v17 )
    {
      v21 = &v14[v15 + 16] - v6;
      do
      {
        *(_OWORD *)&v6[v21] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v17 );
    }
  }
  sub_180031CA0(a1, (__int64)v14, v10, v13);
  return v15 + *a1;
}
