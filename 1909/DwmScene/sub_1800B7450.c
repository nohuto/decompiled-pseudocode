/*
 * XREFs of sub_1800B7450 @ 0x1800B7450
 * Callers:
 *     sub_1800B7428 @ 0x1800B7428 (sub_1800B7428.c)
 *     sub_1800B74D4 @ 0x1800B74D4 (sub_1800B74D4.c)
 *     sub_1800CB794 @ 0x1800CB794 (sub_1800CB794.c)
 * Callees:
 *     sub_1800B73B0 @ 0x1800B73B0 (sub_1800B73B0.c)
 */

__m128 *__fastcall sub_1800B7450(__m128 *a1, double a2)
{
  sub_1800B73B0(a1, a2);
  sub_1800B73B0(a1 + 1, a2);
  sub_1800B73B0(a1 + 2, a2);
  sub_1800B73B0(a1 + 3, a2);
  sub_1800B73B0(a1 + 4, a2);
  sub_1800B73B0(a1 + 5, a2);
  sub_1800B73B0(a1 + 6, a2);
  sub_1800B73B0(a1 + 7, a2);
  return sub_1800B73B0(a1 + 8, a2);
}
