/*
 * XREFs of sub_18009CE24 @ 0x18009CE24
 * Callers:
 *     sub_18009D070 @ 0x18009D070 (sub_18009D070.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180031E4C @ 0x180031E4C (sub_180031E4C.c)
 *     sub_18004332C @ 0x18004332C (sub_18004332C.c)
 */

unsigned __int64 __fastcall sub_18009CE24(
        __int64 *a1,
        char *a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8)
{
  char *v10; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  char *v18; // r11
  unsigned __int64 v19; // r14
  int v20; // r10d
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  char *v25; // rcx
  char *v26; // rax
  signed __int64 v27; // rdx
  signed __int64 v28; // rcx
  signed __int64 v29; // rax

  v10 = a2;
  v12 = (unsigned __int64)&a2[-*a1];
  v13 = (a1[1] - *a1) >> 5;
  if ( v13 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v14 = v13 + 1;
  v15 = (a1[2] - *a1) >> 5;
  v16 = v15 >> 1;
  if ( v15 <= 0x7FFFFFFFFFFFFFFLL - (v15 >> 1) )
  {
    v17 = v16 + v15;
    if ( v16 + v15 < v14 )
      v17 = v14;
  }
  else
  {
    v17 = v14;
  }
  v18 = (char *)sub_180031E4C((__int64)a1, v17);
  v19 = v12 & 0xFFFFFFFFFFFFFFE0uLL;
  v20 = *a8;
  v21 = *a7;
  v22 = *a6;
  v23 = *a5;
  v24 = *a4;
  *(_QWORD *)&v18[v19] = *a3;
  *(_QWORD *)&v18[v19 + 8] = v24;
  *(_DWORD *)&v18[v19 + 16] = v23;
  *(_DWORD *)&v18[v19 + 20] = v22;
  *(_DWORD *)&v18[v19 + 24] = v21;
  *(_DWORD *)&v18[v19 + 28] = v20;
  v25 = (char *)a1[1];
  v26 = (char *)*a1;
  if ( v10 == v25 )
  {
    if ( v26 != v25 )
    {
      v27 = v18 - v26;
      do
      {
        *(_OWORD *)&v26[v27] = *(_OWORD *)v26;
        *(_OWORD *)&v26[v27 + 16] = *((_OWORD *)v26 + 1);
        v26 += 32;
      }
      while ( v26 != v25 );
    }
  }
  else
  {
    if ( v26 != v10 )
    {
      v28 = v18 - v26;
      do
      {
        *(_OWORD *)&v26[v28] = *(_OWORD *)v26;
        *(_OWORD *)&v26[v28 + 16] = *((_OWORD *)v26 + 1);
        v26 += 32;
      }
      while ( v26 != v10 );
      v25 = (char *)a1[1];
    }
    if ( v10 != v25 )
    {
      v29 = &v18[v19 + 32] - v10;
      do
      {
        *(_OWORD *)&v10[v29] = *(_OWORD *)v10;
        *(_OWORD *)&v10[v29 + 16] = *((_OWORD *)v10 + 1);
        v10 += 32;
      }
      while ( v10 != v25 );
    }
  }
  sub_18004332C(a1, (__int64)v18, v14, v17);
  return v19 + *a1;
}
