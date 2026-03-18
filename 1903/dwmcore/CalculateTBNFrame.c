/*
 * XREFs of CalculateTBNFrame @ 0x18000B480
 * Callers:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000AD24 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateTBNFrame(_QWORD *a1, _QWORD *a2, float *a3, __int64 a4, __int64 a5)
{
  unsigned int *v5; // rax
  float *v6; // rax
  __m128 v7; // xmm12
  __m128 v8; // xmm13
  float v9; // xmm10_4
  float v10; // xmm11_4
  float *v11; // rax
  float v12; // xmm10_4
  float v13; // xmm11_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float *v16; // rax
  float v17; // xmm5_4
  float v18; // xmm3_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm6_4
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm8
  __m128 v28; // xmm7
  float v29; // xmm6_4
  unsigned __int64 v30; // xmm9_8
  float v31; // xmm2_4
  unsigned int v32; // xmm6_4
  __int64 result; // rax
  float v34; // [rsp+8h] [rbp-90h]

  v5 = (unsigned int *)a1[1];
  v7 = (__m128)*v5;
  v8 = (__m128)v5[1];
  v6 = (float *)a1[2];
  v7.m128_f32[0] = v7.m128_f32[0] - *(float *)*a1;
  v8.m128_f32[0] = v8.m128_f32[0] - *(float *)(*a1 + 4LL);
  v9 = *v6;
  v10 = v6[1];
  v11 = (float *)a2[1];
  v12 = v9 - *(float *)*a1;
  v13 = v10 - *(float *)(*a1 + 4LL);
  v14 = *v11;
  v15 = v11[1];
  v16 = (float *)a2[2];
  v17 = v14 - *(float *)*a2;
  v18 = v15 - *(float *)(*a2 + 4LL);
  v19 = *v16 - *(float *)*a2;
  v20 = v16[1] - *(float *)(*a2 + 4LL);
  v21 = (float)(v17 * v20) - (float)(v18 * v19);
  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v21) & _xmm);
  if ( v22 < 0.0000011920929 )
  {
    v27 = (__m128)(unsigned int)FLOAT_1_0;
    v34 = 0.0;
    v28 = 0LL;
    v29 = 0.0;
    v30 = _mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
  }
  else
  {
    v27 = v7;
    v28 = v8;
    v27.m128_f32[0] = (float)(v7.m128_f32[0] * v20) - (float)(v12 * v18);
    v28.m128_f32[0] = (float)(v8.m128_f32[0] * v20) - (float)(v13 * v18);
    v23 = (float)(v20 * 0.0) - (float)(v18 * 0.0);
    v24 = (__m128)(unsigned int)FLOAT_1_0;
    v24.m128_f32[0] = 1.0 / v21;
    v25 = v24;
    v26 = v24;
    v25.m128_f32[0] = (float)(1.0 / v21) * (float)((float)(v12 * v17) - (float)(v7.m128_f32[0] * v19));
    v27.m128_f32[0] = v27.m128_f32[0] * (float)(1.0 / v21);
    v28.m128_f32[0] = v28.m128_f32[0] * (float)(1.0 / v21);
    v29 = v23 * (float)(1.0 / v21);
    v26.m128_f32[0] = (float)(1.0 / v21) * (float)((float)(v13 * v17) - (float)(v8.m128_f32[0] * v19));
    v24.m128_f32[0] = (float)(1.0 / v21) * (float)((float)(v17 * 0.0) - (float)(v19 * 0.0));
    v30 = _mm_unpacklo_ps(v25, v26).m128_u64[0];
    v34 = v24.m128_f32[0];
  }
  v31 = (float)((float)(*a3 * v27.m128_f32[0]) + (float)(a3[1] * v28.m128_f32[0])) + (float)(a3[2] * v29);
  v27.m128_f32[0] = v27.m128_f32[0] - (float)(*a3 * v31);
  v28.m128_f32[0] = v28.m128_f32[0] - (float)(a3[1] * v31);
  *(float *)&v32 = v29 - (float)(a3[2] * v31);
  *(_QWORD *)a4 = _mm_unpacklo_ps(v27, v28).m128_u64[0];
  result = v32;
  *(float *)(a4 + 8) = *(float *)&v32;
  *(_QWORD *)a5 = v30;
  *(float *)(a5 + 8) = v34;
  return result;
}
