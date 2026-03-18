/*
 * XREFs of ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800380E0
 * Callers:
 *     <none>
 * Callees:
 *     pow @ 0x1800EC61C (pow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CubicBezierInterpolation::Compute(__int64 a1, double a2, unsigned int a3, __int64 a4)
{
  int v7; // edi
  double v8; // xmm13_8
  __int64 v9; // xmm2_8
  double v10; // xmm0_8
  __int128 v11; // xmm7
  double v12; // xmm8_8
  double v13; // xmm6_8
  float v14; // xmm0_4
  float v15; // xmm2_4
  __int128 v16; // xmm1
  double v17; // xmm0_8
  float v18; // xmm2_4
  __int64 v19; // rdx
  double v21; // [rsp+30h] [rbp-C8h]
  double v22; // [rsp+100h] [rbp+8h]

  v7 = 0;
  a2 = *(float *)&a2;
  v8 = *(float *)(a1 + 24);
  v22 = *(float *)(a1 + 32);
  v9 = _xmm;
  v10 = DOUBLE_6_0;
  v11 = *(_OWORD *)&a2;
  v21 = a2;
  do
  {
    v12 = 1.0 - *(double *)&v11;
    v13 = (1.0 - *(double *)&v11) * v10 * *(double *)&v11 * (v22 - v8)
        + v12 * v12 * 3.0 * v8
        + *(double *)&v11 * *(double *)&v11 * 3.0 * (1.0 - v22);
    v14 = v13;
    v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & v9);
    if ( v15 < 0.0000011920929 )
      break;
    *((_QWORD *)&v16 + 1) = *((_QWORD *)&v11 + 1);
    *(double *)&v16 = *(double *)&v11
                    - (pow(*(double *)&v11, 3.0)
                     + v12 * 3.0 * (*(double *)&v11 * *(double *)&v11) * v22
                     + v12 * v12 * 3.0 * *(double *)&v11 * v8
                     - v21)
                    / v13;
    v17 = *(double *)&v11 - *(double *)&v16;
    v11 = v16;
    *(float *)&v17 = v17;
    v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v17) & _xmm);
    if ( v18 < 0.0000011920929 )
      break;
    v9 = _xmm;
    ++v7;
    v10 = DOUBLE_6_0;
  }
  while ( v7 < 30 );
  pow(*(double *)&v11, 3.0);
  return KeyframeInterpolation::Interpolate(a1, v19, a3, a4);
}
