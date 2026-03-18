/*
 * XREFs of ?AnimateSingle@FloorBouncer@Particles@@UEAAXAEAV?$span@M$0?0@gsl@@0@Z @ 0x1801DD600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float *__fastcall Particles::FloorBouncer::AnimateSingle(__int64 a1, __int64 a2, __int64 a3)
{
  float *result; // rax
  float v4; // xmm1_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm3_4

  result = *(float **)(a2 + 8);
  v4 = *(float *)(a1 + 8);
  if ( result[1] > v4 )
  {
    result[1] = v4;
    result = *(float **)(a3 + 8);
    v5 = result[1];
    v6 = (float)((float)(*result * 0.0) + v5) + (float)((float)(*result * 0.0) + v5);
    v7 = (float)(*result - (float)(v6 * 0.0)) * *(float *)(a1 + 12);
    result[1] = (float)(v5 - v6) * *(float *)(a1 + 12);
    *result = v7;
  }
  return result;
}
