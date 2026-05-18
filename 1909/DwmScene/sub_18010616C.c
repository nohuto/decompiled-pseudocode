/*
 * XREFs of sub_18010616C @ 0x18010616C
 * Callers:
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18010616C(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, 0.0);
  *(float *)(a1 + 160) = fminf(v3, 1.0);
}
