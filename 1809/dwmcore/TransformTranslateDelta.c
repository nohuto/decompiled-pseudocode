/*
 * XREFs of TransformTranslateDelta @ 0x180221B34
 * Callers:
 *     ?UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z @ 0x180221BB0 (-UnTransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@K_NPEAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

float *__fastcall TransformTranslateDelta(float a1, float a2, __m128 *a3, float *a4, float *a5)
{
  __m128 v5; // xmm4
  float *result; // rax
  float v8; // xmm2_4
  float v9; // xmm0_4

  v5 = *a3;
  result = a5;
  v8 = (float)(COERCE_FLOAT(*a3) * a1) + (float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] * a2);
  v9 = _mm_shuffle_ps(*a3, *a3, 85).m128_f32[0];
  *a4 = v8 + 0.0;
  *a5 = (float)((float)(v9 * a1) + (float)(_mm_shuffle_ps(v5, v5, 255).m128_f32[0] * a2)) + 0.0;
  return result;
}
