/*
 * XREFs of sub_1801230D4 @ 0x1801230D4
 * Callers:
 *     sub_180120CA0 @ 0x180120CA0 (sub_180120CA0.c)
 *     sub_1801345B3 @ 0x1801345B3 (sub_1801345B3.c)
 *     sub_1801345FB @ 0x1801345FB (sub_1801345FB.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 */

__int64 __fastcall sub_1801230D4(__int64 a1, __int64 a2)
{
  sub_180124524(a2 + 64);
  unknown_libname_116((__int64 *)(a2 + 32));
  return j_j__o_free(a2);
}
