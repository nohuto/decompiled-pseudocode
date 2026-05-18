/*
 * XREFs of sub_1800D1F04 @ 0x1800D1F04
 * Callers:
 *     sub_1800EF550 @ 0x1800EF550 (sub_1800EF550.c)
 *     sub_1801106E0 @ 0x1801106E0 (sub_1801106E0.c)
 *     sub_180110730 @ 0x180110730 (sub_180110730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D1F04(int a1, __int64 a2, __int64 a3)
{
  return a3 | ((__int64)a1 << 53) | 0x200;
}
