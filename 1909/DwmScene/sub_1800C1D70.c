/*
 * XREFs of sub_1800C1D70 @ 0x1800C1D70
 * Callers:
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 * Callees:
 *     sub_1800B73B0 @ 0x1800B73B0 (sub_1800B73B0.c)
 *     sub_1800BE1B0 @ 0x1800BE1B0 (sub_1800BE1B0.c)
 *     sub_18011C9A8 @ 0x18011C9A8 (sub_18011C9A8.c)
 *     fmodf @ 0x180127308 (fmodf.c)
 */

__m128 *__fastcall sub_1800C1D70(__m128 *a1, float a2, float a3, float a4, float X)
{
  float v6; // xmm0_4
  float v7; // xmm12_4
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm10_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  __m128 *result; // rax

  v6 = fmaxf(a2, 0.0);
  v7 = fminf(v6, 360.0);
  v8 = fmaxf(a3, -100.0);
  v9 = fminf(v8, 100.0);
  v10 = fmaxf(a4, -100.0);
  v11 = fminf(v10, 100.0);
  v12 = fmaxf(X, -100.0);
  v13 = sub_1800BE1B0(v9) * 0.5;
  v14 = fminf(v12, 100.0);
  sub_1800BE1B0(v14);
  if ( v13 < 0.0 )
    fmodf(v7 + 180.0, 360.0);
  sub_18011C9A8(a1);
  sub_1800B73B0(a1, COERCE_DOUBLE(0x40000000LL));
  result = a1;
  a1->m128_f32[3] = (float)(v11 * 0.0099999998) + 1.0;
  return result;
}
