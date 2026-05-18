/*
 * XREFs of sub_1800CB648 @ 0x1800CB648
 * Callers:
 *     sub_18001BEAC @ 0x18001BEAC (sub_18001BEAC.c)
 *     sub_1800B8950 @ 0x1800B8950 (sub_1800B8950.c)
 * Callees:
 *     sub_18001BE10 @ 0x18001BE10 (sub_18001BE10.c)
 */

__m128 *__fastcall sub_1800CB648(__m128 *a1, __m128 *a2)
{
  sub_18001BE10(a1 + 3, a2);
  sub_18001BE10(a1 + 4, a2);
  return sub_18001BE10(a1 + 5, a2);
}
