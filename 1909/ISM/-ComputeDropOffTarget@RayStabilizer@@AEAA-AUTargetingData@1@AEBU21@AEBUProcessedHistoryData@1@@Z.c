/*
 * XREFs of ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x18012C634
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x18012CB00 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     fmodf_0 @ 0x180037843 (fmodf_0.c)
 *     sqrtf_0 @ 0x18003785B (sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18012CAB4 (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 */

__m128 *__fastcall RayStabilizer::ComputeDropOffTarget(__m128 *a1, __m128 *a2, float *a3, float *a4)
{
  __m128 v7; // xmm1
  __m128 v8; // xmm9
  float v9; // xmm11_4
  float v10; // xmm10_4
  float v11; // xmm14_4
  __m128 v12; // xmm6
  float v13; // xmm2_4
  float v14; // xmm8_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  __m128 v17; // xmm3
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __m128 v20; // xmm3
  float v21; // xmm8_4
  __int32 v22; // eax
  float v23; // xmm6_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm3
  __m128 v30; // xmm3
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm3
  unsigned __int32 v34; // xmm0_4
  float v35; // xmm8_4
  float v36; // xmm10_4
  float v37; // xmm0_4
  float v38; // xmm8_4
  float v39; // xmm8_4
  float v40; // xmm10_4
  float v41; // xmm0_4
  float v42; // xmm8_4
  unsigned __int64 v44; // [rsp+28h] [rbp-59h] BYREF
  float v45; // [rsp+30h] [rbp-51h]
  __int64 v46; // [rsp+38h] [rbp-49h] BYREF
  __int32 v47; // [rsp+40h] [rbp-41h]
  __m256i v48; // [rsp+48h] [rbp-39h]

  if ( a1[5].m128_i8[0] )
  {
    v8 = a1[3];
    v9 = a3[1];
    v10 = *a3;
    v11 = a3[2];
    v12 = a1[4];
    v13 = *a3 - v8.m128_f32[0];
    v14 = fmaxf(0.0, 0.0 - (float)(a4[3] * 0.2));
    v15 = v9 - _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
    v16 = v11 - _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
    *(float *)&v44 = v13;
    v45 = v16;
    *((float *)&v44 + 1) = v15;
    *(__m128 *)v48.m256i_i8 = v8;
    *(__m128 *)&v48.m256i_u64[2] = v12;
    if ( v14 == 0.0
      || (float)(sqrtf_0((float)((float)(v15 * v15) + (float)(v13 * v13)) + (float)(v16 * v16)) / v14) > 1.0 )
    {
      v17 = _mm_movelh_ps((__m128)v44, (__m128)LODWORD(v45));
      v18 = _mm_mul_ps(v17, v17);
      v19 = _mm_shuffle_ps(v18, v18, 102);
      v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      v20 = _mm_div_ps(v17, _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0)));
      LODWORD(v44) = v20.m128_i32[0];
      *((float *)&v44 + 1) = _mm_shuffle_ps(v20, v20, 85).m128_f32[0];
      v45 = _mm_shuffle_ps(v20, v20, 170).m128_f32[0];
      *(float *)v48.m256i_i32 = v10 - (float)(v20.m128_f32[0] * v14);
      *(float *)&v48.m256i_i32[1] = v9 - (float)(*((float *)&v44 + 1) * v14);
      *(float *)&v48.m256i_i32[2] = v11 - (float)(v45 * v14);
      v8 = *(__m128 *)v48.m256i_i8;
    }
    v21 = fmaxf(0.0, 0.050000001 - (float)(a4[7] * 0.30000001));
    if ( v21 == 0.0
      || (v22 = *((_DWORD *)a3 + 5),
          v46 = *(_QWORD *)(a3 + 3),
          v44 = *(unsigned __int64 *)((char *)&v48.m256i_u64[1] + 4),
          v47 = v22,
          v45 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 4))),
          (float)(RayStabilizer::DeltaAngle(&v44, &v46) / v21) > 1.0) )
    {
      v23 = a3[5];
      v24 = a3[3];
      v25 = a3[4];
      *(float *)&v44 = v24 - *(float *)&v48.m256i_i32[3];
      *((float *)&v44 + 1) = v25 - *(float *)&v48.m256i_i32[4];
      v26 = _mm_movelh_ps((__m128)v44, (__m128)COERCE_UNSIGNED_INT(v23 - *(float *)&v48.m256i_i32[5]));
      v27 = _mm_mul_ps(v26, v26);
      v28 = _mm_shuffle_ps(v27, v27, 102);
      v27.m128_f32[0] = (float)(v27.m128_f32[0] + v28.m128_f32[0]) + _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
      v29 = _mm_div_ps(v26, _mm_sqrt_ps(_mm_shuffle_ps(v27, v27, 0)));
      LODWORD(v44) = v29.m128_i32[0];
      *((float *)&v44 + 1) = _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
      v45 = _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
      v30 = _mm_movelh_ps(
              (__m128)__PAIR64__(v25 - (float)(*((float *)&v44 + 1) * v21), v24 - (float)(v29.m128_f32[0] * v21)),
              (__m128)COERCE_UNSIGNED_INT(v23 - (float)(v45 * v21)));
      v31 = _mm_mul_ps(v30, v30);
      v32 = _mm_shuffle_ps(v31, v31, 102);
      v31.m128_f32[0] = (float)(v31.m128_f32[0] + v32.m128_f32[0]) + _mm_shuffle_ps(v32, v32, 85).m128_f32[0];
      v33 = _mm_div_ps(v30, _mm_sqrt_ps(_mm_shuffle_ps(v31, v31, 0)));
      LODWORD(v46) = v33.m128_i32[0];
      v34 = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
      HIDWORD(v46) = v34;
      *(__int64 *)((char *)&v48.m256i_i64[1] + 4) = __PAIR64__(v34, v33.m128_u32[0]);
      v8 = *(__m128 *)v48.m256i_i8;
      v47 = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
      v48.m256i_i32[5] = v47;
      v12 = *(__m128 *)&v48.m256i_u64[2];
    }
    v35 = a3[6];
    v36 = fmaxf(0.0, 0.80000001 - (float)(a4[11] * 0.2));
    if ( v36 == 0.0 || (v37 = fmodf_0(_mm_shuffle_ps(v12, v12, 170).m128_f32[0] - v35, 360.0) / v36, v37 > 1.0) )
    {
      v38 = v35 + v36;
    }
    else
    {
      if ( v37 >= -1.0 )
      {
LABEL_15:
        v39 = a3[7];
        v40 = fmaxf(0.0, 0.80000001 - (float)(a4[15] * 0.2));
        if ( v40 == 0.0 || (v41 = fmodf_0(_mm_shuffle_ps(v12, v12, 255).m128_f32[0] - v39, 360.0) / v40, v41 > 1.0) )
        {
          v42 = v39 + v40;
        }
        else
        {
          if ( v41 >= -1.0 )
          {
LABEL_21:
            *a2 = v8;
            a2[1] = v12;
            return a2;
          }
          v42 = v39 - v40;
        }
        *(float *)&v48.m256i_i32[7] = v42;
        v12 = *(__m128 *)&v48.m256i_u64[2];
        goto LABEL_21;
      }
      v38 = v35 - v36;
    }
    *(float *)&v48.m256i_i32[6] = v38;
    v12 = *(__m128 *)&v48.m256i_u64[2];
    goto LABEL_15;
  }
  v7 = *(__m128 *)(a3 + 4);
  *a2 = *(__m128 *)a3;
  a2[1] = v7;
  return a2;
}
