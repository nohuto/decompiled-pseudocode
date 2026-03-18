/*
 * XREFs of EmitterShapes::GetPointOnLine @ 0x1801DC8B4
 * Callers:
 *     ?GetPointOnEdge@Figure@CPathEmitterShape@EmitterShapes@@QEBA?AUfloat2@Numerics@Foundation@Windows@@MM@Z @ 0x1801DC7E8 (-GetPointOnEdge@Figure@CPathEmitterShape@EmitterShapes@@QEBA-AUfloat2@Numerics@Foundation@Window.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 */

float *__fastcall EmitterShapes::GetPointOnLine(float *a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  float *result; // rax

  v6 = *(float *)&a3 - *(float *)&a2;
  v7 = *((float *)&a3 + 1) - *((float *)&a2 + 1);
  v8 = sqrtf_0((float)(v7 * v7) + (float)(v6 * v6));
  result = a1;
  *a1 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / v8) * v7) ^ _xmm) * a5)
      + (float)((float)(v6 * a4) + *(float *)&a2);
  a1[1] = (float)((float)((float)(1.0 / v8) * v6) * a5) + (float)((float)(v7 * a4) + *((float *)&a2 + 1));
  return result;
}
