/*
 * XREFs of DCEInverseTransform @ 0x1C01D1918
 * Callers:
 *     DCEHitTestWindow @ 0x1C01D183C (DCEHitTestWindow.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1C01D2210 (FixedPointSubPixel.c)
 */

__int64 __fastcall DCEInverseTransform(int *a1, float *a2, int *a3, int *a4)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  int *v6; // r10
  float v7; // xmm3_4
  float v8; // xmm7_4
  float v9; // xmm9_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm5_4
  float v14; // xmm11_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm3_4

  v5 = *a2;
  v6 = a1;
  v7 = a2[8] - *a2;
  v8 = a2[16] - *a2;
  v9 = a2[1];
  v10 = a2[9] - v9;
  v11 = a2[17] - v9;
  if ( a3 )
    FixedPointSubPixel(*a3);
  else
    v4 = 0.0;
  v12 = (float)((float)*a4 + v4) - v5;
  if ( a3 )
    FixedPointSubPixel(a3[1]);
  else
    v4 = 0.0;
  v13 = (float)((float)a4[1] + v4) - v9;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v14 <= 0.00000011920929 )
  {
    v15 = v7;
    v16 = v10;
    v7 = v8;
    v10 = v11;
    v8 = v15;
    v11 = v16;
  }
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v17 <= 0.00000011920929 )
    return 0LL;
  v18 = (float)(v11 * v7) - (float)(v8 * v10);
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18) & _xmm);
  if ( v19 <= 0.00000011920929 )
    return 0LL;
  v20 = (float)((float)(v13 * v7) - (float)(v12 * v10)) / v18;
  v21 = (float)(v12 - (float)(v20 * v8)) / v7;
  if ( v14 <= 0.00000011920929 )
  {
    v22 = v21;
    v21 = v20;
    v20 = v22;
  }
  v23 = (float)((float)((float)((float)((float)(a2[14] - a2[6]) * v21) + a2[6]) + (float)((float)(a2[22] - a2[6]) * v20))
              * (float)(v6[2] - *v6))
      + (float)*v6;
  v24 = (float)((float)((float)((float)((float)(a2[15] - a2[7]) * v21) + a2[7]) + (float)((float)(a2[23] - a2[7]) * v20))
              * (float)(v6[3] - v6[1]))
      + (float)v6[1];
  if ( v23 < 0.0 )
    v25 = v23 - 0.5;
  else
    v25 = v23 + 0.5;
  *a4 = (int)v25;
  if ( v24 < 0.0 )
    v26 = v24 - 0.5;
  else
    v26 = v24 + 0.5;
  a4[1] = (int)v26;
  return 1LL;
}
