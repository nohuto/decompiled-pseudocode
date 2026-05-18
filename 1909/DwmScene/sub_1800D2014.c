/*
 * XREFs of sub_1800D2014 @ 0x1800D2014
 * Callers:
 *     sub_1800EF660 @ 0x1800EF660 (sub_1800EF660.c)
 *     sub_1801107F0 @ 0x1801107F0 (sub_1801107F0.c)
 *     sub_180110840 @ 0x180110840 (sub_180110840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D2014(int a1, __int64 a2, __int64 a3)
{
  return a3 | ((__int64)a1 << 53) | 0x200;
}
