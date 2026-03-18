/*
 * XREFs of ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18005B180
 * Callers:
 *     <none>
 * Callees:
 *     pow @ 0x1800E7F6C (pow.c)
 */

__int64 __fastcall CubicBezierInterpolation::Compute(__int64 a1, float a2, unsigned int a3, __int64 a4)
{
  int v7; // edi
  double v8; // xmm15_8
  __int128 v9; // xmm14
  __int128 v10; // xmm8
  double v11; // xmm9_8
  double v12; // xmm3_8
  double v13; // xmm9_8
  float v14; // xmm0_4
  float v15; // xmm2_4
  __int128 v16; // xmm1
  double v17; // xmm3_8
  double v18; // xmm0_8
  float v19; // xmm2_4
  __int64 v20; // rdx
  double v22; // [rsp+100h] [rbp+8h]

  v7 = 0;
  v9 = 0LL;
  v8 = *(float *)(a1 + 32);
  v22 = *(float *)(a1 + 24);
  *(double *)&v9 = a2;
  v10 = v9;
  do
  {
    v11 = 1.0 - *(double *)&v10;
    v12 = pow(*(double *)&v10, 3.0)
        + v11 * 3.0 * (*(double *)&v10 * *(double *)&v10) * v8
        + v11 * v11 * 3.0 * *(double *)&v10 * v22;
    v13 = v11 * 6.0 * *(double *)&v10 * (v8 - v22)
        + v11 * v11 * 3.0 * v22
        + *(double *)&v10 * *(double *)&v10 * 3.0 * (1.0 - v8);
    v14 = v13;
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
    if ( v15 < 0.0000011920929 )
      break;
    *((_QWORD *)&v16 + 1) = *((_QWORD *)&v10 + 1);
    v17 = (v12 - *(double *)&v9) / v13;
    *(double *)&v16 = *(double *)&v10 - v17;
    v18 = *(double *)&v10 - (*(double *)&v10 - v17);
    v10 = v16;
    *(float *)&v18 = v18;
    v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v18) & _xmm);
    if ( v19 < 0.0000011920929 )
      break;
    ++v7;
  }
  while ( v7 < 30 );
  pow(*(double *)&v10, 3.0);
  return KeyframeInterpolation::Interpolate(a1, v20, a3, a4);
}
