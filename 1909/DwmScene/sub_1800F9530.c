/*
 * XREFs of sub_1800F9530 @ 0x1800F9530
 * Callers:
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800EDA30 @ 0x1800EDA30 (sub_1800EDA30.c)
 *     sub_1800EE508 @ 0x1800EE508 (sub_1800EE508.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 *     sub_18010F964 @ 0x18010F964 (sub_18010F964.c)
 * Callees:
 *     sub_1800D1830 @ 0x1800D1830 (sub_1800D1830.c)
 */

__int64 __fastcall sub_1800F9530(__int64 a1, __int64 a2)
{
  sub_1800D1830(a1 + 128, a2);
  return sub_1800D20C4(a2 + 16);
}
