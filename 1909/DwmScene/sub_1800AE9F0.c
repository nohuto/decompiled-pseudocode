/*
 * XREFs of sub_1800AE9F0 @ 0x1800AE9F0
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800DB98C @ 0x1800DB98C (sub_1800DB98C.c)
 *     sub_1800DDB68 @ 0x1800DDB68 (sub_1800DDB68.c)
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 *     sub_18010B3B4 @ 0x18010B3B4 (sub_18010B3B4.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 *     sub_180112CC0 @ 0x180112CC0 (sub_180112CC0.c)
 * Callees:
 *     sub_180033F18 @ 0x180033F18 (sub_180033F18.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 */

_QWORD *__fastcall sub_1800AE9F0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v5; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = sub_18006CEC8(*a3);
  sub_180033F18((__int64 *)(a1 + 448), a2, v5);
  return a2;
}
