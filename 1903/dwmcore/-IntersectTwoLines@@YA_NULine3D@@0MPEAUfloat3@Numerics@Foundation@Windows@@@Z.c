/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C75B4
 * Callers:
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801C7458 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 a1, __int64 *a2, float a3, __int64 a4)
{
  float v4; // xmm10_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  __m128 v9; // xmm6
  float v10; // xmm1_4
  __m128 v11; // xmm5
  float v12; // xmm4_4
  __m128 v13; // xmm3
  __m128 v14; // xmm2
  float v16; // [rsp+30h] [rbp-81h]
  __int64 v17; // [rsp+38h] [rbp-79h]
  float v18; // [rsp+40h] [rbp-71h]
  __int64 v19; // [rsp+48h] [rbp-69h]
  float v20; // [rsp+50h] [rbp-61h]
  __int64 v21; // [rsp+58h] [rbp-59h]
  float v22; // [rsp+60h] [rbp-51h]
  float v23; // [rsp+118h] [rbp+67h]
  float v24; // [rsp+120h] [rbp+6Fh]
  float v26; // [rsp+130h] [rbp+7Fh]

  v21 = *(_QWORD *)(a1 + 12);
  v17 = *a2;
  v19 = *(__int64 *)((char *)a2 + 12);
  v16 = *(float *)(a1 + 8);
  v22 = *(float *)(a1 + 20);
  v18 = *((float *)a2 + 2);
  v20 = *((float *)a2 + 5);
  v4 = (float)(v20 * *((float *)&v21 + 1)) - (float)(v22 * *((float *)&v19 + 1));
  v5 = (float)(v22 * *(float *)&v19) - (float)(v20 * *(float *)&v21);
  v6 = (float)(*(float *)&v21 * *((float *)&v19 + 1)) - (float)(*((float *)&v21 + 1) * *(float *)&v19);
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  v8 = (float)((float)((float)((float)((float)((float)(v16 - v18) * *((float *)&v19 + 1))
                                     - (float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)a1)) - *((float *)&v17 + 1)) * v20))
                             * v4)
                     + (float)((float)((float)((float)(COERCE_FLOAT(*(_QWORD *)a1) - *(float *)&v17) * v20)
                                     - (float)((float)(v16 - v18) * *(float *)&v19))
                             * v5))
             + (float)((float)((float)((float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)a1)) - *((float *)&v17 + 1))
                                     * *(float *)&v19)
                             - (float)((float)(COERCE_FLOAT(*(_QWORD *)a1) - *(float *)&v17) * *((float *)&v19 + 1)))
                     * v6))
     / v7;
  v24 = COERCE_FLOAT(HIDWORD(*(_QWORD *)a1)) + (float)(*((float *)&v21 + 1) * v8);
  v23 = COERCE_FLOAT(*(_QWORD *)a1) + (float)(*(float *)&v21 * v8);
  v26 = v16 + (float)(v22 * v8);
  v9 = (__m128)(unsigned int)*a2;
  v10 = (float)((float)((float)((float)((float)(*((float *)&v21 + 1) * (float)(v16 - v18))
                                      - (float)(v22
                                              * (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)a1)) - COERCE_FLOAT(HIDWORD(*a2)))))
                              * v4)
                      + (float)((float)((float)(v22 * (float)(COERCE_FLOAT(*(_QWORD *)a1) - COERCE_FLOAT(*a2)))
                                      - (float)(*(float *)&v21 * (float)(v16 - v18)))
                              * v5))
              + (float)((float)((float)(*(float *)&v21
                                      * (float)(COERCE_FLOAT(HIDWORD(*(_QWORD *)a1)) - COERCE_FLOAT(HIDWORD(*a2))))
                              - (float)(*((float *)&v21 + 1) * (float)(COERCE_FLOAT(*(_QWORD *)a1) - COERCE_FLOAT(*a2))))
                      * v6))
      / v7;
  v11 = (__m128)HIDWORD(*a2);
  v12 = v18 + (float)(v20 * v10);
  v9.m128_f32[0] = COERCE_FLOAT(*a2) + (float)(*(float *)&v19 * v10);
  v11.m128_f32[0] = COERCE_FLOAT(HIDWORD(*a2)) + (float)(*((float *)&v19 + 1) * v10);
  v13 = v9;
  v14 = v11;
  v13.m128_f32[0] = (float)(v9.m128_f32[0] + v23) * 0.5;
  v14.m128_f32[0] = (float)(v11.m128_f32[0] + v24) * 0.5;
  *(_QWORD *)a4 = _mm_unpacklo_ps(v13, v14).m128_u64[0];
  *(float *)(a4 + 8) = (float)(v12 + v26) * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v24 - (float)(*((float *)&v17 + 1) + (float)(*((float *)&v19 + 1) * v10)))
                              * (float)(v24 - (float)(*((float *)&v17 + 1) + (float)(*((float *)&v19 + 1) * v10))))
                      + (float)((float)(v23 - (float)(*(float *)&v17 + (float)(*(float *)&v19 * v10)))
                              * (float)(v23 - (float)(*(float *)&v17 + (float)(*(float *)&v19 * v10)))))
              + (float)((float)(v26 - v12) * (float)(v26 - v12)));
}
