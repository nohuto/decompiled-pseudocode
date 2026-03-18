/*
 * XREFs of bCvtPts @ 0x1C00AF8C4
 * Callers:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00AF810 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C0123800 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0123870 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C008A898 (bFToL.c)
 */

__int64 __fastcall bCvtPts(__int64 a1, int *a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  int *v6; // rsi
  signed __int64 v8; // rsi
  int v9; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  float v13; // xmm3_4
  float v14; // r9d
  unsigned int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  float v22; // xmm3_4
  float v23; // xmm2_4
  unsigned int v24; // r8d
  int v25[6]; // [rsp+20h] [rbp-18h] BYREF
  float v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0 )
  {
LABEL_30:
    if ( a4 )
    {
      do
      {
        v22 = (float)*v6;
        v23 = (float)v6[1];
        bFToL((float)(v23 * *(float *)(a1 + 8)) + (float)(v22 * *(float *)a1), (int *)&v26, 6u);
        bFToL((float)(v22 * *(float *)(a1 + 4)) + (float)(v23 * *(float *)(a1 + 12)), v25, v24);
        v6 += 2;
        *v5 = *(_DWORD *)(a1 + 24) + LODWORD(v26);
        v5[1] = v25[0] + *(_DWORD *)(a1 + 28);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 1 )
  {
LABEL_11:
    if ( a4 )
    {
      *(float *)&v11 = v26;
      LODWORD(v12) = v25[0];
      do
      {
        v13 = (float)v6[1] * *(float *)(a1 + 12);
        v14 = (float)*v6 * *(float *)a1;
        v15 = (unsigned __int8)(SLODWORD(v14) >> 23);
        if ( v15 <= 0x9E )
        {
          v16 = LODWORD(v14) & 0x7FFFFF | 0x800000LL;
          v17 = v15 < 0x76 ? v16 >> (118 - (unsigned __int8)v15) : v16 << ((unsigned __int8)v15 - 118);
          v11 = (v17 + 0x80000000LL) >> 32;
          if ( v14 < 0.0 )
            LODWORD(v11) = -(int)v11;
        }
        v26 = (float)v6[1] * *(float *)(a1 + 12);
        v18 = (unsigned __int8)(SLODWORD(v13) >> 23);
        if ( v18 <= 0x9E )
        {
          v19 = LODWORD(v13) & 0x7FFFFF | 0x800000LL;
          v20 = v18 < 0x76 ? v19 >> (118 - (unsigned __int8)v18) : v19 << ((unsigned __int8)v18 - 118);
          v12 = (v20 + 0x80000000LL) >> 32;
          if ( v13 < 0.0 )
            LODWORD(v12) = -(int)v12;
        }
        v6 += 2;
        *v5 = v11 + *(_DWORD *)(a1 + 24);
        v5[1] = v12 + *(_DWORD *)(a1 + 28);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0xB) != 8 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0xB) != 9 )
      {
        if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0xB && a4 )
        {
          v8 = (char *)a2 - (char *)a3;
          do
          {
            *v5 = *(_DWORD *)(a1 + 24) + 16 * *(_DWORD *)((char *)v5 + v8);
            v9 = *(_DWORD *)((char *)v5 + v8 + 4);
            v5 += 2;
            *(v5 - 1) = *(_DWORD *)(a1 + 28) + 16 * v9;
            --v4;
          }
          while ( v4 );
        }
        return 1LL;
      }
      goto LABEL_11;
    }
    goto LABEL_30;
  }
  if ( a4 )
  {
    do
    {
      v21 = *v6;
      v6 += 2;
      *v5 = *(_DWORD *)(a1 + 24) + (((v21 >> 3) + 1) >> 1);
      v5 += 2;
      *(v5 - 1) = *(_DWORD *)(a1 + 28) + (((*(v6 - 1) >> 3) + 1) >> 1);
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
