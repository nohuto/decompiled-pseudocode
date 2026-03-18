/*
 * XREFs of ?GetPoint@?$CBezier@MVCMilPoint2F@@@@QEBAXMAEAVCMilPoint2F@@@Z @ 0x1802206BC
 * Callers:
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x180220778 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBezier<float,CMilPoint2F>::GetPoint(float *a1, float a2, _QWORD *a3)
{
  __m128 v3; // xmm3
  float v4; // xmm7_4
  __m128 v5; // xmm6
  __m128 v6; // xmm5
  float v7; // xmm4_4
  __m128 v8; // xmm2

  v3 = (__m128)LODWORD(FLOAT_1_0);
  v3.m128_f32[0] = 1.0 - a2;
  v4 = (float)(a2 * a2) * a2;
  v5 = v3;
  v5.m128_f32[0] = v3.m128_f32[0] * v3.m128_f32[0];
  v6 = v5;
  v7 = (float)((float)(1.0 - a2) * 3.0) * (float)(a2 * a2);
  v6.m128_f32[0] = (float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * 3.0) * a2;
  v8 = v6;
  v8.m128_f32[0] = (float)((float)((float)(v6.m128_f32[0] * a1[2])
                                 + (float)((float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * v3.m128_f32[0]) * *a1))
                         + (float)(v7 * a1[4]))
                 + (float)(v4 * a1[6]);
  v6.m128_f32[0] = (float)((float)((float)(v6.m128_f32[0] * a1[3])
                                 + (float)((float)((float)(v3.m128_f32[0] * v3.m128_f32[0]) * v3.m128_f32[0]) * a1[1]))
                         + (float)(v7 * a1[5]))
                 + (float)(v4 * a1[7]);
  *a3 = _mm_unpacklo_ps(v8, v6).m128_u64[0];
}
