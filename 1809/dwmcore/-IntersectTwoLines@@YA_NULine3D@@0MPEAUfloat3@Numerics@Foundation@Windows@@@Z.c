/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18018FB60
 * Callers:
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x18018FA04 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 *a1, __int64 *a2, float a3, __int64 a4)
{
  float v4; // xmm8_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm13_4
  __m128 v10; // xmm5
  float v11; // xmm9_4
  __m128 v12; // xmm6
  float v13; // xmm2_4
  float v14; // xmm0_4
  __m128 v15; // xmm3
  float v16; // xmm7_4
  __m128 v17; // xmm2
  __int64 v19; // [rsp+28h] [rbp-69h]
  float v20; // [rsp+30h] [rbp-61h]
  __int64 v21; // [rsp+38h] [rbp-59h]
  float v22; // [rsp+40h] [rbp-51h]
  __int64 v23; // [rsp+48h] [rbp-49h]
  float v24; // [rsp+50h] [rbp-41h]
  __int64 v25; // [rsp+58h] [rbp-39h]
  float v26; // [rsp+60h] [rbp-31h]
  float v27; // [rsp+100h] [rbp+6Fh]
  float v29; // [rsp+110h] [rbp+7Fh]

  v23 = *a1;
  v21 = *(__int64 *)((char *)a1 + 12);
  v25 = *a2;
  v19 = *(__int64 *)((char *)a2 + 12);
  v24 = *((float *)a1 + 2);
  v22 = *((float *)a1 + 5);
  v26 = *((float *)a2 + 2);
  v20 = *((float *)a2 + 5);
  v4 = (float)(v20 * *((float *)&v21 + 1)) - (float)(v22 * *((float *)&v19 + 1));
  v5 = (float)(v22 * *(float *)&v19) - (float)(v20 * *(float *)&v21);
  v6 = (float)(*(float *)&v21 * *((float *)&v19 + 1)) - (float)(*((float *)&v21 + 1) * *(float *)&v19);
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  v8 = (float)((float)((float)((float)((float)((float)(*(float *)&v23 - *(float *)&v25) * v20)
                                     - (float)((float)(v24 - v26) * *(float *)&v19))
                             * v5)
                     + (float)((float)((float)((float)(v24 - v26) * *((float *)&v19 + 1))
                                     - (float)((float)(*((float *)&v23 + 1) - *((float *)&v25 + 1)) * v20))
                             * v4))
             + (float)((float)((float)((float)(*((float *)&v23 + 1) - *((float *)&v25 + 1)) * *(float *)&v19)
                             - (float)((float)(*(float *)&v23 - *(float *)&v25) * *((float *)&v19 + 1)))
                     * v6))
     / v7;
  v27 = COERCE_FLOAT(*a1) + (float)(*(float *)&v21 * v8);
  v9 = (float)(*((float *)&v21 + 1) * v8) + COERCE_FLOAT(HIDWORD(*a1));
  v29 = v24 + (float)(v22 * v8);
  v10 = (__m128)HIDWORD(*a2);
  v11 = (float)((float)(v22 * (float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2)))
              - (float)(*(float *)&v21 * (float)(v24 - v26)))
      * v5;
  v12 = (__m128)(unsigned int)*a2;
  v13 = (float)((float)((float)((float)((float)((float)(v24 - v26) * *((float *)&v21 + 1))
                                      - (float)((float)(COERCE_FLOAT(HIDWORD(*a1)) - COERCE_FLOAT(HIDWORD(*a2))) * v22))
                              * v4)
                      + v11)
              + (float)((float)((float)((float)(*((float *)&v23 + 1) - *((float *)&v25 + 1)) * *(float *)&v21)
                              - (float)((float)(*(float *)&v23 - *(float *)&v25) * *((float *)&v21 + 1)))
                      * v6))
      / v7;
  v12.m128_f32[0] = COERCE_FLOAT(*a2) + (float)(v13 * *(float *)&v19);
  v10.m128_f32[0] = COERCE_FLOAT(HIDWORD(*a2)) + (float)(*((float *)&v19 + 1) * v13);
  v14 = (float)(v26 + (float)(v20 * v13)) + v29;
  v15 = v12;
  v16 = v29 - (float)(v26 + (float)(v20 * v13));
  v17 = v10;
  v15.m128_f32[0] = (float)(v12.m128_f32[0] + v27) * 0.5;
  v17.m128_f32[0] = (float)(v10.m128_f32[0] + v9) * 0.5;
  *(_QWORD *)a4 = _mm_unpacklo_ps(v15, v17).m128_u64[0];
  *(float *)(a4 + 8) = v14 * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v9 - v10.m128_f32[0]) * (float)(v9 - v10.m128_f32[0]))
                      + (float)((float)(v27 - v12.m128_f32[0]) * (float)(v27 - v12.m128_f32[0])))
              + (float)(v16 * v16));
}
