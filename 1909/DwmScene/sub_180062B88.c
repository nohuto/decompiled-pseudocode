/*
 * XREFs of sub_180062B88 @ 0x180062B88
 * Callers:
 *     sub_180062CD8 @ 0x180062CD8 (sub_180062CD8.c)
 *     sub_180062DAC @ 0x180062DAC (sub_180062DAC.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 *     sub_180031CA0 @ 0x180031CA0 (sub_180031CA0.c)
 */

unsigned __int64 __fastcall sub_180062B88(__int64 *a1, char *a2, _QWORD *a3, _BYTE *a4)
{
  char *v6; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rdx
  unsigned __int64 v15; // r14
  char *v16; // rcx
  char *v17; // rax
  signed __int64 v18; // r8
  signed __int64 v19; // rcx
  signed __int64 v20; // rax

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
  v14 = sub_18000F60C((__int64)a1, v13);
  v15 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)((char *)v14 + v15) = *a3;
  *((_BYTE *)v14 + v15 + 8) = *a4;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  if ( v6 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = (char *)v14 - v17;
      do
      {
        *(_OWORD *)&v17[v18] = *(_OWORD *)v17;
        v17 += 16;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    if ( v17 != v6 )
    {
      v19 = (char *)v14 - v17;
      do
      {
        *(_OWORD *)&v17[v19] = *(_OWORD *)v17;
        v17 += 16;
      }
      while ( v17 != v6 );
      v16 = (char *)a1[1];
    }
    if ( v6 != v16 )
    {
      v20 = (char *)v14 + v15 + 16 - v6;
      do
      {
        *(_OWORD *)&v6[v20] = *(_OWORD *)v6;
        v6 += 16;
      }
      while ( v6 != v16 );
    }
  }
  sub_180031CA0(a1, (__int64)v14, v10, v13);
  return v15 + *a1;
}
