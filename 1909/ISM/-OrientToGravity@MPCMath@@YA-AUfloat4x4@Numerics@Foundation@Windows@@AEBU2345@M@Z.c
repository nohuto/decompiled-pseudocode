/*
 * XREFs of ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180138718
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137BA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013B710 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18013C00C (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x18003785B (sqrtf_0.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800EAC94 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall MPCMath::OrientToGravity(__int64 a1, __int64 a2, float a3)
{
  float v6; // xmm5_4
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm3
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm8_4
  float v25; // xmm6_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  unsigned int v29; // xmm1_4
  __m128 v30; // xmm3
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm3
  _OWORD *v34; // rax
  float v36; // [rsp+28h] [rbp-89h]
  unsigned __int64 v37; // [rsp+28h] [rbp-89h]
  unsigned __int64 v38; // [rsp+38h] [rbp-79h]
  float v39; // [rsp+40h] [rbp-71h]
  float v40; // [rsp+48h] [rbp-69h] BYREF
  __int64 v41; // [rsp+4Ch] [rbp-65h]
  __int64 v42; // [rsp+54h] [rbp-5Dh]
  float v43; // [rsp+5Ch] [rbp-55h]
  __int64 v44; // [rsp+60h] [rbp-51h]
  __int64 v45; // [rsp+68h] [rbp-49h]
  float v46; // [rsp+70h] [rbp-41h]
  __int64 v47; // [rsp+74h] [rbp-3Dh]
  __int64 v48; // [rsp+7Ch] [rbp-35h]
  float v49; // [rsp+84h] [rbp-2Dh]
  _BYTE v50[128]; // [rsp+88h] [rbp-29h] BYREF

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  v38 = *(_QWORD *)(a2 + 32);
  v39 = *(float *)(a2 + 40);
  v6 = sqrtf_0(
         (float)((float)(*((float *)&v38 + 1) * *((float *)&v38 + 1)) + (float)(*(float *)&v38 * *(float *)&v38))
       + (float)(v39 * v39));
  v7 = _mm_movelh_ps((__m128)v38, (__m128)LODWORD(v39));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  v36 = v10.m128_f32[0];
  v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v12 = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
  v13 = v10.m128_f32[0] * 0.0;
  v14 = v12 * 0.0;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v11 + v13) + (float)(v12 * 0.0))) & _xmm);
  if ( v15 <= a3 )
  {
    v27 = v11 * 0.0;
    v28 = v12 - v27;
    *(float *)&v29 = v27 - v36;
    *((float *)&v37 + 1) = v13 - v14;
    *(float *)&v37 = v28;
    v30 = _mm_movelh_ps((__m128)v37, (__m128)v29);
    v31 = _mm_mul_ps(v30, v30);
    v32 = _mm_shuffle_ps(v31, v31, 102);
    v31.m128_f32[0] = (float)(v31.m128_f32[0] + v32.m128_f32[0]) + _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
    v33 = _mm_div_ps(v30, _mm_sqrt_ps(_mm_shuffle_ps(v31, v31, 0)));
    LODWORD(v37) = v33.m128_i32[0];
    v26 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
    v25 = _mm_shuffle_ps(v33, v33, 170).m128_f32[0];
    v24 = v33.m128_f32[0];
    v23 = v33.m128_f32[0] - (float)(v26 * 0.0);
    v20 = (float)(v26 * 0.0) - v25;
    v22 = (float)(v25 * 0.0) - (float)(*(float *)&v37 * 0.0);
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
  v49 = FLOAT_1_0;
  *(_DWORD *)(a1 + 16) = 0;
  v41 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  *(float *)a1 = v24;
  *(float *)(a1 + 4) = v26;
  *(float *)(a1 + 8) = v25;
  *(float *)(a1 + 32) = v20;
  *(float *)(a1 + 36) = v22;
  *(float *)(a1 + 40) = v23;
  v40 = v6;
  v43 = v6;
  v46 = v6;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  v34 = Windows::Foundation::Numerics::operator*((__int64)v50, (__int128 *)a1, &v40);
  *(_OWORD *)a1 = *v34;
  *(_OWORD *)(a1 + 16) = v34[1];
  *(_OWORD *)(a1 + 32) = v34[2];
  *(_OWORD *)(a1 + 48) = v34[3];
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  return a1;
}
