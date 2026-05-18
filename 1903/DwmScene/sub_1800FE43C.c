/*
 * XREFs of sub_1800FE43C @ 0x1800FE43C
 * Callers:
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800FE43C(__int64 a1, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(a2, -1.5533431);
  *(float *)(a1 + 1824) = fminf(v3, 1.5533431);
}
