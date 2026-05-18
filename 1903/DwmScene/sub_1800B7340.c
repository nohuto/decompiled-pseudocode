/*
 * XREFs of sub_1800B7340 @ 0x1800B7340
 * Callers:
 *     sub_1800B7318 @ 0x1800B7318 (sub_1800B7318.c)
 *     sub_1800B73C4 @ 0x1800B73C4 (sub_1800B73C4.c)
 *     sub_1800CB684 @ 0x1800CB684 (sub_1800CB684.c)
 * Callees:
 *     sub_1800B72A0 @ 0x1800B72A0 (sub_1800B72A0.c)
 */

__m128 *__fastcall sub_1800B7340(__m128 *a1, double a2)
{
  sub_1800B72A0(a1, a2);
  sub_1800B72A0(a1 + 1, a2);
  sub_1800B72A0(a1 + 2, a2);
  sub_1800B72A0(a1 + 3, a2);
  sub_1800B72A0(a1 + 4, a2);
  sub_1800B72A0(a1 + 5, a2);
  sub_1800B72A0(a1 + 6, a2);
  sub_1800B72A0(a1 + 7, a2);
  return sub_1800B72A0(a1 + 8, a2);
}
