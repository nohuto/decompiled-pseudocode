/*
 * XREFs of DCEInverseTransform @ 0x1C01AEA1C
 * Callers:
 *     DCEHitTestWindow @ 0x1C01AE940 (DCEHitTestWindow.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1C01AF3C0 (FixedPointSubPixel.c)
 */

__int64 __fastcall DCEInverseTransform(int *a1, float *a2, int *a3, int *a4)
{
  float v4; // xmm1_4
  int *v5; // r10
  float v6; // xmm3_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm11_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 result; // rax
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm3_4

  v4 = *a2;
  v5 = a1;
  v6 = a2[8] - *a2;
  v7 = a2[16] - *a2;
  v8 = a2[1];
  v9 = a2[9] - v8;
  v10 = a2[17] - v8;
  if ( a3 )
    v11 = FixedPointSubPixel(*a3);
  else
    v11 = 0.0;
  v12 = (float)((float)*a4 + v11) - v4;
  if ( a3 )
    v13 = FixedPointSubPixel(a3[1]);
  else
    v13 = 0.0;
  v14 = (float)((float)a4[1] + v13) - v8;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v15 <= 0.00000011920929 )
  {
    v16 = v6;
    v17 = v9;
    v6 = v7;
    v9 = v10;
    v7 = v16;
    v10 = v17;
  }
  result = 0LL;
  v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v19 > 0.00000011920929 )
  {
    v20 = (float)(v10 * v6) - (float)(v7 * v9);
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
    if ( v21 > 0.00000011920929 )
    {
      LOBYTE(result) = v15 <= 0.00000011920929;
      v22 = (float)((float)(v14 * v6) - (float)(v12 * v9)) / v20;
      v23 = (float)(v12 - (float)(v22 * v7)) / v6;
      if ( (_DWORD)result )
      {
        v24 = v23;
        v23 = v22;
        v22 = v24;
      }
      v25 = (float)((float)((float)((float)((float)(a2[14] - a2[6]) * v23) + a2[6])
                          + (float)((float)(a2[22] - a2[6]) * v22))
                  * (float)(v5[2] - *v5))
          + (float)*v5;
      v26 = (float)((float)((float)((float)((float)(a2[15] - a2[7]) * v23) + a2[7])
                          + (float)((float)(a2[23] - a2[7]) * v22))
                  * (float)(v5[3] - v5[1]))
          + (float)v5[1];
      if ( v25 < 0.0 )
        v27 = v25 - 0.5;
      else
        v27 = v25 + 0.5;
      *a4 = (int)v27;
      if ( v26 < 0.0 )
        v28 = v26 - 0.5;
      else
        v28 = v26 + 0.5;
      a4[1] = (int)v28;
      return 1LL;
    }
  }
  return result;
}
