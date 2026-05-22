/*
 * XREFs of ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1800FA994
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800FC538 (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FC980 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800AA148 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     sqrtf_0 @ 0x18012DB2F (sqrtf_0.c)
 */

__int64 __fastcall MPCMath::OrientToGravity(__int64 a1, __int64 a2, float a3)
{
  float v6; // xmm8_4
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm3
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm9_4
  float v25; // xmm6_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm3_4
  unsigned int v29; // xmm1_4
  __m128 v30; // xmm3
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm3
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  __int64 result; // rax
  float v38; // [rsp+28h] [rbp-49h]
  unsigned __int64 v39; // [rsp+28h] [rbp-49h]
  unsigned __int64 v40; // [rsp+38h] [rbp-39h]
  float v41; // [rsp+40h] [rbp-31h]
  _BYTE v42[20]; // [rsp+48h] [rbp-29h] BYREF
  float v43; // [rsp+5Ch] [rbp-15h]
  __int64 v44; // [rsp+60h] [rbp-11h]
  _DWORD v45[24]; // [rsp+68h] [rbp-9h]

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  v40 = *(_QWORD *)(a2 + 32);
  v41 = *(float *)(a2 + 40);
  v6 = sqrtf_0(
         (float)((float)(*((float *)&v40 + 1) * *((float *)&v40 + 1)) + (float)(*(float *)&v40 * *(float *)&v40))
       + (float)(v41 * v41));
  v7 = _mm_movelh_ps((__m128)v40, (__m128)LODWORD(v41));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  v38 = v10.m128_f32[0];
  v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v12 = v10.m128_f32[0] * 0.0;
  v13 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v14 = v13 * 0.0;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v11 + v12) + (float)(v13 * 0.0))) & _xmm);
  if ( v15 <= a3 )
  {
    v27 = v11 * 0.0;
    v28 = v13 - v27;
    *(float *)&v29 = v27 - v38;
    *((float *)&v39 + 1) = v12 - v14;
    *(float *)&v39 = v28;
    v30 = _mm_movelh_ps((__m128)v39, (__m128)v29);
    v31 = _mm_mul_ps(v30, v30);
    v32 = _mm_shuffle_ps(v31, v31, 102);
    v31.m128_f32[0] = (float)(v31.m128_f32[0] + v32.m128_f32[0]) + _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
    v33 = _mm_div_ps(v30, _mm_sqrt_ps(_mm_shuffle_ps(v31, v31, 0)));
    LODWORD(v39) = v33.m128_i32[0];
    v26 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
    v25 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
    v24 = v33.m128_f32[0];
    v23 = v33.m128_f32[0] - (float)(v26 * 0.0);
    v20 = (float)(v26 * 0.0) - v25;
    v22 = (float)(v25 * 0.0) - (float)(*(float *)&v39 * 0.0);
  }
  else
  {
    v16 = _mm_movelh_ps(
            (__m128)__PAIR64__(
                      (float)(*(float *)(a2 + 8) * 0.0) - (float)(*(float *)a2 * 0.0),
                      (float)(*(float *)(a2 + 4) * 0.0) - *(float *)(a2 + 8)),
            (__m128)COERCE_UNSIGNED_INT(*(float *)a2 - (float)(*(float *)(a2 + 4) * 0.0)));
    v17 = _mm_mul_ps(v16, v16);
    v18 = _mm_shuffle_ps(v17, v17, 102);
    v17.m128_f32[0] = (float)(v17.m128_f32[0] + v18.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
    v19 = _mm_div_ps(v16, _mm_sqrt_ps(_mm_shuffle_ps(v17, v17, 0)));
    v20 = v19.m128_f32[0];
    v21 = v19.m128_f32[0];
    v22 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
    v23 = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
    v24 = v23 - (float)(v22 * 0.0);
    v25 = (float)(v22 * 0.0) - v20;
    v26 = (float)(v21 * 0.0) - (float)(v23 * 0.0);
  }
  *(float *)(a1 + 36) = v22;
  *(float *)(a1 + 40) = v23;
  *(float *)&v45[7] = FLOAT_1_0;
  *(_QWORD *)&v42[12] = 0LL;
  *(_QWORD *)&v45[3] = 0LL;
  *(float *)(a1 + 4) = v26;
  *(_DWORD *)(a1 + 16) = 0;
  *(float *)a1 = v24;
  *(float *)(a1 + 8) = v25;
  *(float *)(a1 + 32) = v20;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)&v42[4] = 0LL;
  v44 = 0LL;
  *(_QWORD *)v45 = 0LL;
  *(_QWORD *)&v45[5] = 0LL;
  *(float *)v42 = v6;
  v43 = v6;
  *(float *)&v45[2] = v6;
  v34 = *(_OWORD *)(a1 + 16);
  v35 = *(_OWORD *)(a1 + 32);
  v36 = *(_OWORD *)(a1 + 48);
  *(__m128 *)a1 = DirectX::XMMatrixMultiply(*(double *)a1, (__m128 *)v42);
  result = a1;
  *(_OWORD *)(a1 + 16) = v34;
  *(_OWORD *)(a1 + 32) = v35;
  *(_OWORD *)(a1 + 48) = v36;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  return result;
}
