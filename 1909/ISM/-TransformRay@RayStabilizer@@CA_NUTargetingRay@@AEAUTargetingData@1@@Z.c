/*
 * XREFs of ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x18012DB14
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CB00 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CE04 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x18012D4C4 (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 * Callees:
 *     acosf_0 @ 0x180037807 (acosf_0.c)
 *     asinf_0 @ 0x180037813 (asinf_0.c)
 */

char __fastcall RayStabilizer::TransformRay(float *a1, __int64 a2)
{
  float v2; // xmm3_4
  __m128 v5; // xmm6
  unsigned int v6; // eax
  float v7; // xmm0_4
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm3
  float v12; // xmm0_4

  v2 = a1[5];
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v2) & _xmm) >= 0.99000001 )
    return 0;
  v5 = (__m128)*((unsigned int *)a1 + 3);
  v6 = *((_DWORD *)a1 + 2);
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)a1, (__m128)*((unsigned int *)a1 + 1)).m128_u64[0];
  v5.m128_u64[0] = _mm_unpacklo_ps(v5, (__m128)*((unsigned int *)a1 + 4)).m128_u64[0];
  *(_QWORD *)(a2 + 12) = v5.m128_u64[0];
  *(float *)(a2 + 20) = v2;
  v7 = *(float *)(a2 + 16);
  *(_DWORD *)(a2 + 8) = v6;
  *(float *)(a2 + 24) = (float)(asinf_0(v7) * 180.0) / 3.142;
  v8 = _mm_movelh_ps((__m128)v5.m128_u32[0], (__m128)LODWORD(v2));
  v9 = _mm_mul_ps(v8, v8);
  v10 = _mm_shuffle_ps(v9, v9, 102);
  v9.m128_f32[0] = (float)(v9.m128_f32[0] + v10.m128_f32[0]) + _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v11 = _mm_div_ps(v8, _mm_sqrt_ps(_mm_shuffle_ps(v9, v9, 0)));
  v12 = (float)(acosf_0(
                  (float)((float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0] * -0.0) + (float)(v11.m128_f32[0] * -0.0))
                - _mm_shuffle_ps(v11, v11, 170).m128_f32[0])
              * 180.0)
      / 3.142;
  *(float *)(a2 + 28) = v12;
  if ( v11.m128_f32[0] > 0.0 )
    *(float *)(a2 + 28) = v12 * -1.0;
  return 1;
}
