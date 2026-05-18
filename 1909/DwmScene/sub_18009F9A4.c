/*
 * XREFs of sub_18009F9A4 @ 0x18009F9A4
 * Callers:
 *     sub_180036E90 @ 0x180036E90 (sub_180036E90.c)
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 * Callees:
 *     sub_180033F18 @ 0x180033F18 (sub_180033F18.c)
 */

_QWORD *__fastcall sub_18009F9A4(__int64 a1, _QWORD *a2, unsigned int a3)
{
  sub_180033F18((__int64 *)(a1 + 128), a2, a3);
  return a2;
}
