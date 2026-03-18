/*
 * XREFs of ??0Line3D@@QEAA@UMilPoint4F@@0@Z @ 0x1801C7080
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801C7158 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Line3D::Line3D(__int64 a1, float *a2, float *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm2
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  float v10; // [rsp+8h] [rbp-10h]

  v3 = (__m128)(unsigned int)FLOAT_1_0;
  v4 = (__m128)(unsigned int)FLOAT_1_0;
  v3.m128_f32[0] = 1.0 / a3[3];
  v4.m128_f32[0] = 1.0 / a2[3];
  v5 = v4;
  v6 = v4;
  v5.m128_f32[0] = v4.m128_f32[0] * *a2;
  v6.m128_f32[0] = v4.m128_f32[0] * a2[1];
  v4.m128_f32[0] = v4.m128_f32[0] * a2[2];
  v5.m128_u64[0] = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  v7 = v3;
  v7.m128_f32[0] = v3.m128_f32[0] * a3[1];
  *(_QWORD *)a1 = v5.m128_u64[0];
  v8 = v3;
  v8.m128_f32[0] = v3.m128_f32[0] * *a3;
  v3.m128_f32[0] = v3.m128_f32[0] * a3[2];
  *(_DWORD *)(a1 + 8) = v4.m128_i32[0];
  v8.m128_f32[0] = v8.m128_f32[0] - *(float *)a1;
  v7.m128_f32[0] = v7.m128_f32[0] - *(float *)(a1 + 4);
  v10 = v3.m128_f32[0] - *(float *)(a1 + 8);
  *(_QWORD *)(a1 + 12) = _mm_unpacklo_ps(v8, v7).m128_u64[0];
  *(float *)(a1 + 20) = v10;
  return a1;
}
