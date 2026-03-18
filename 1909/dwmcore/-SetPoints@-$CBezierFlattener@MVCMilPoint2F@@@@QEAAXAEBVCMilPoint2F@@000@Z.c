/*
 * XREFs of ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18024AA60
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18024AF68 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18024B4F0 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x18024A9AC (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 */

__m128 __fastcall CBezierFlattener<float,CMilPoint2F>::SetPoints(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  __m128 v11; // xmm4
  __m128 result; // xmm0

  LODWORD(v5) = HIDWORD(*a2);
  v6 = COERCE_FLOAT(*a2);
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(float *)(a1 + 52) = v5;
  *(float *)(a1 + 48) = v6;
  v7 = *(float *)(a1 + 28) - v5;
  *(float *)(a1 + 56) = *(float *)(a1 + 24) - v6;
  *(float *)(a1 + 60) = v7;
  v8 = (float)((float)(*(float *)(a1 + 12) - (float)(*(float *)(a1 + 20) + *(float *)(a1 + 20))) + *(float *)(a1 + 28))
     * 6.0;
  *(float *)(a1 + 64) = (float)((float)(*(float *)(a1 + 8) - (float)(*(float *)(a1 + 16) + *(float *)(a1 + 16)))
                              + *(float *)(a1 + 24))
                      * 6.0;
  *(float *)(a1 + 68) = v8;
  v9 = (float)(v5 - (float)(*(float *)(a1 + 12) + *(float *)(a1 + 12))) + *(float *)(a1 + 20);
  v10 = (float)(v6 - (float)(*(float *)(a1 + 8) + *(float *)(a1 + 8))) + *(float *)(a1 + 16);
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 80) = 1;
  *(float *)(a1 + 76) = v9 * 6.0;
  v11 = (__m128)(unsigned __int64)_xmm;
  *(float *)(a1 + 72) = v10 * 6.0;
  while ( 1 )
  {
    if ( fmaxf(
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 64)) & v11.m128_u64[0]),
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 68)) & v11.m128_u64[0])) <= *(float *)(a1 + 32) )
    {
      result = _mm_cvtpd_ps((__m128d)_mm_and_ps((__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 76)), v11));
      if ( fmaxf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 72)) & v11.m128_u64[0]), result.m128_f32[0]) <= *(float *)(a1 + 32) )
        break;
    }
    result = (__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 88));
    if ( *(double *)result.m128_u64 <= 0.001 )
      break;
    CBezierFlattener<float,CMilPoint2F>::HalveTheStep(a1);
  }
  return result;
}
