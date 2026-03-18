/*
 * XREFs of ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z @ 0x1801CC87C
 * Callers:
 *     ?GetLightToCameraMatrix@CProjectedShadow@@AEBAJPEBVCDrawingContext@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1801CAAF4 (-GetLightToCameraMatrix@CProjectedShadow@@AEBAJPEBVCDrawingContext@@PEBVCCompositionLight@@AEBUf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_look_at(__int64 a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm11_4
  float v5; // xmm12_4
  float v6; // xmm13_4
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  float v11; // xmm8_4
  float v12; // xmm0_4
  float v13; // xmm10_4
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  __m128 v17; // xmm3
  __int64 result; // rax
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm4_4
  unsigned __int64 v22; // [rsp+8h] [rbp-49h]
  float v23; // [rsp+10h] [rbp-41h]
  float v24; // [rsp+1Ch] [rbp-35h]
  float v25; // [rsp+20h] [rbp-31h]

  v4 = a2[2];
  v5 = *a2;
  v6 = a2[1];
  *(float *)&v22 = *a2 - *a3;
  *((float *)&v22 + 1) = v6 - a3[1];
  v7 = _mm_movelh_ps((__m128)v22, (__m128)COERCE_UNSIGNED_INT(v4 - a3[2]));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  v11 = v10.m128_f32[0];
  v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v23 = v10.m128_f32[0];
  v13 = v10.m128_f32[0];
  v14 = _mm_movelh_ps(
          (__m128)__PAIR64__(
                    (float)(a4[2] * v11) - (float)(*a4 * v10.m128_f32[0]),
                    (float)(a4[1] * v10.m128_f32[0]) - (float)(a4[2] * v12)),
          (__m128)COERCE_UNSIGNED_INT((float)(*a4 * v12) - (float)(a4[1] * v11)));
  v15 = _mm_mul_ps(v14, v14);
  v16 = _mm_shuffle_ps(v15, v15, 102);
  v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
  v17 = _mm_div_ps(v14, _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)));
  v25 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
  v24 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  v19 = (float)(v12 * v25) - (float)(v24 * v13);
  *(_DWORD *)a1 = v17.m128_i32[0];
  *(float *)(a1 + 4) = v19;
  v20 = (float)(v17.m128_f32[0] * v23) - (float)(v11 * v25);
  *(float *)(a1 + 8) = v11;
  *(float *)(a1 + 24) = v12;
  *(float *)(a1 + 40) = v13;
  *(float *)(a1 + 20) = v20;
  v21 = (float)(v11 * v24) - (float)(v17.m128_f32[0] * v12);
  *(float *)(a1 + 36) = v21;
  *(float *)(a1 + 16) = v24;
  *(float *)(a1 + 32) = v25;
  *(_DWORD *)(a1 + 52) = COERCE_UNSIGNED_INT((float)((float)(v20 * v6) + (float)(v19 * v5)) + (float)(v21 * v4)) ^ _xmm;
  *(_DWORD *)(a1 + 56) = COERCE_UNSIGNED_INT((float)((float)(v6 * v12) + (float)(v5 * v11)) + (float)(v4 * v13)) ^ _xmm;
  *(_DWORD *)(a1 + 48) = COERCE_UNSIGNED_INT((float)((float)(v6 * v24) + (float)(v5 * v17.m128_f32[0])) + (float)(v4 * v25)) ^ _xmm;
  return result;
}
