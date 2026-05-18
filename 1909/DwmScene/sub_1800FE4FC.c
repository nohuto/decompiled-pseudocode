/*
 * XREFs of sub_1800FE4FC @ 0x1800FE4FC
 * Callers:
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800FE4FC(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, -1.5533431);
  *(float *)(a1 + 1820) = fminf(v3, 1.5533431);
}
