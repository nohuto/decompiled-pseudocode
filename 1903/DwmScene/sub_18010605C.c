/*
 * XREFs of sub_18010605C @ 0x18010605C
 * Callers:
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18010605C(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, 0.0);
  *(float *)(a1 + 160) = fminf(v3, 1.0);
}
