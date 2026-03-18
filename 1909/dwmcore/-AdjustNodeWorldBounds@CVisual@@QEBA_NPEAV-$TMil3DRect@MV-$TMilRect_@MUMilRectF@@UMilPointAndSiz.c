/*
 * XREFs of ?AdjustNodeWorldBounds@CVisual@@QEBA_NPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800BE2B8
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::AdjustNodeWorldBounds(__int64 a1, float *a2, char a3)
{
  float v3; // xmm6_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  int v6; // eax
  char v7; // cl
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm1_4

  v3 = a2[2];
  if ( v3 <= *a2 )
    return 0;
  v4 = a2[3];
  v5 = a2[1];
  if ( v4 <= v5 )
    return 0;
  v6 = *(_DWORD *)(a1 + 88);
  v7 = 1;
  if ( a3 )
  {
    v8 = FLOAT_4_0;
  }
  else if ( (v6 & 0x400) != 0 )
  {
    v8 = FLOAT_0_5;
  }
  else
  {
    v8 = 0.0;
  }
  if ( (v6 & 0x800) != 0 )
    v8 = v8 + 0.5;
  if ( v8 != 0.0 )
  {
    v9 = *a2 - v8;
    v10 = v5 - v8;
    v11 = v3 + v8;
    v12 = v4 + v8;
    v13 = a2[4] - 0.0;
    v14 = a2[5] + 0.0;
    *a2 = v9;
    a2[1] = v10;
    a2[2] = v11;
    a2[3] = v12;
    a2[4] = v13;
    a2[5] = v14;
  }
  return v7;
}
