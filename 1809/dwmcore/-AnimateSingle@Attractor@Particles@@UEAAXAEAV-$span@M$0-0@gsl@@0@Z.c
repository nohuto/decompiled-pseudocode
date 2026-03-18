/*
 * XREFs of ?AnimateSingle@Attractor@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD550
 * Callers:
 *     <none>
 * Callees:
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 */

void __fastcall Particles::Attractor::AnimateSingle(float *a1, __int64 a2, __int64 a3)
{
  float *v3; // rax
  float *v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4

  v3 = *(float **)(a2 + 8);
  v5 = *(float **)(a3 + 8);
  v6 = a1[2] - *v3;
  v7 = a1[3] - v3[1];
  v8 = sqrtf_0((float)(v7 * v7) + (float)(v6 * v6));
  if ( a1[5] > v8 )
  {
    v9 = 1.0 / v8;
    v10 = (float)((float)((float)(1.0 / v8) * v6) * a1[4]) + *v5;
    v5[1] = (float)((float)(v9 * v7) * a1[4]) + v5[1];
    *v5 = v10;
  }
}
