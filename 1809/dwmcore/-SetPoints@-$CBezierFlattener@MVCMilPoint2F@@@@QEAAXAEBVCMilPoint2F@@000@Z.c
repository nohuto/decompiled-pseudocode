/*
 * XREFs of ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x18021E28C
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18021E7A4 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18021ED88 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x18021E1D8 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 */

__m128 __fastcall CBezierFlattener<float,CMilPoint2F>::SetPoints(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  float v5; // xmm5_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  __m128 v10; // xmm4
  __m128 result; // xmm0
  __int64 v12; // [rsp+40h] [rbp+8h]

  v12 = *a2;
  LODWORD(v5) = HIDWORD(*a2);
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_DWORD *)(a1 + 48) = v12;
  *(float *)(a1 + 52) = v5;
  v6 = *(float *)(a1 + 28) - v5;
  *(float *)(a1 + 56) = *(float *)(a1 + 24) - *(float *)&v12;
  *(float *)(a1 + 60) = v6;
  v7 = (float)((float)(*(float *)(a1 + 12) - (float)(*(float *)(a1 + 20) + *(float *)(a1 + 20))) + *(float *)(a1 + 28))
     * 6.0;
  *(float *)(a1 + 64) = (float)((float)(*(float *)(a1 + 8) - (float)(*(float *)(a1 + 16) + *(float *)(a1 + 16)))
                              + *(float *)(a1 + 24))
                      * 6.0;
  *(float *)(a1 + 68) = v7;
  v8 = (float)(*(float *)&v12 - (float)(*(float *)(a1 + 8) + *(float *)(a1 + 8))) + *(float *)(a1 + 16);
  v9 = (float)(v5 - (float)(*(float *)(a1 + 12) + *(float *)(a1 + 12))) + *(float *)(a1 + 20);
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 80) = 1;
  v10 = (__m128)(unsigned __int64)_xmm;
  *(float *)(a1 + 72) = v8 * 6.0;
  *(float *)(a1 + 76) = v9 * 6.0;
  while ( 1 )
  {
    if ( fmaxf(
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 64)) & v10.m128_u64[0]),
           COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 68)) & v10.m128_u64[0])) <= *(float *)(a1 + 32) )
    {
      result = _mm_cvtpd_ps((__m128d)_mm_and_ps((__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 76)), v10));
      if ( fmaxf(COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 72)) & v10.m128_u64[0]), result.m128_f32[0]) <= *(float *)(a1 + 32) )
        break;
    }
    result = (__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 88));
    if ( *(double *)result.m128_u64 <= 0.001 )
      break;
    CBezierFlattener<float,CMilPoint2F>::HalveTheStep(a1);
  }
  return result;
}
