/*
 * XREFs of sub_1800CB758 @ 0x1800CB758
 * Callers:
 *     sub_18001BFBC @ 0x18001BFBC (sub_18001BFBC.c)
 *     sub_1800B8A60 @ 0x1800B8A60 (sub_1800B8A60.c)
 * Callees:
 *     sub_18001BF20 @ 0x18001BF20 (sub_18001BF20.c)
 */

__m128 *__fastcall sub_1800CB758(__m128 *a1, __m128 *a2)
{
  sub_18001BF20(a1 + 3, a2);
  sub_18001BF20(a1 + 4, a2);
  return sub_18001BF20(a1 + 5, a2);
}
