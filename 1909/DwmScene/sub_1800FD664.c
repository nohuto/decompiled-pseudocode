/*
 * XREFs of sub_1800FD664 @ 0x1800FD664
 * Callers:
 *     sub_1800FE1A4 @ 0x1800FE1A4 (sub_1800FE1A4.c)
 * Callees:
 *     sub_1800B1948 @ 0x1800B1948 (sub_1800B1948.c)
 *     tanf @ 0x180127302 (tanf.c)
 *     sqrtf @ 0x18012730E (sqrtf.c)
 */

__m128 __fastcall sub_1800FD664(__int64 a1, float a2)
{
  float v3; // xmm7_4
  float v4; // xmm2_4
  __int128 v5; // xmm0
  float v6; // xmm7_4
  __int128 v7; // xmm6

  sub_1800B1948(a1);
  v3 = tanf((float)(*(float *)(a1 + 328) * 0.017453292) * 0.5);
  v4 = v3 * v3;
  v5 = 0x3F800000u;
  v6 = v3 / (float)(1.0 / *(float *)(a1 + 332));
  *(float *)&v5 = sqrtf((float)(1.0 / v4) + 1.0);
  v7 = v5;
  *(float *)&v7 = fmaxf(*(float *)&v5 * a2, sqrtf((float)(1.0 / (float)(v6 * v6)) + 1.0) * a2);
  return (__m128)v7;
}
