/*
 * XREFs of sub_1800FD554 @ 0x1800FD554
 * Callers:
 *     sub_1800FE094 @ 0x1800FE094 (sub_1800FE094.c)
 * Callees:
 *     sub_1800B1838 @ 0x1800B1838 (sub_1800B1838.c)
 *     tanf @ 0x1801271F2 (tanf.c)
 *     sqrtf @ 0x1801271FE (sqrtf.c)
 */

__m128 __fastcall sub_1800FD554(__int64 a1, float a2)
{
  float v3; // xmm7_4
  float v4; // xmm2_4
  __int128 v5; // xmm0
  float v6; // xmm7_4
  __int128 v7; // xmm6

  sub_1800B1838(a1);
  v3 = tanf((float)(*(float *)(a1 + 328) * 0.017453292) * 0.5);
  v4 = v3 * v3;
  v5 = 0x3F800000u;
  v6 = v3 / (float)(1.0 / *(float *)(a1 + 332));
  *(float *)&v5 = sqrtf((float)(1.0 / v4) + 1.0);
  v7 = v5;
  *(float *)&v7 = fmaxf(*(float *)&v5 * a2, sqrtf((float)(1.0 / (float)(v6 * v6)) + 1.0) * a2);
  return (__m128)v7;
}
