/*
 * XREFs of ?AnimateSingle@CParticleAttractor@@UEBAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801E6EA0
 * Callers:
 *     <none>
 * Callees:
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

void __fastcall CParticleAttractor::AnimateSingle(float *a1, __int64 a2, __int64 a3)
{
  float *v3; // rdi
  float *v5; // rax
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm0_4
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm1

  v3 = *(float **)(a3 + 8);
  v5 = *(float **)(a2 + 8);
  v6 = a1[2] - *v5;
  v7 = a1[3] - v5[1];
  v8 = a1[4] - v5[2];
  v9 = fmaxf(sqrtf_0((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)), 0.001);
  if ( a1[5] > v9 )
  {
    v10 = (__m128)(unsigned int)FLOAT_1_0;
    v10.m128_f32[0] = 1.0 / v9;
    v11 = v10;
    v12 = v10;
    v11.m128_f32[0] = (float)((float)(v10.m128_f32[0] * v6) * a1[6]) + *v3;
    v12.m128_f32[0] = (float)((float)(v10.m128_f32[0] * v7) * a1[6]) + v3[1];
    v10.m128_f32[0] = (float)((float)(v10.m128_f32[0] * v8) * a1[6]) + v3[2];
    *(_QWORD *)v3 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
    v3[2] = v10.m128_f32[0];
  }
}
