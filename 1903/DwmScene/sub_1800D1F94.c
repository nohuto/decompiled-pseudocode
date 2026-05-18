/*
 * XREFs of sub_1800D1F94 @ 0x1800D1F94
 * Callers:
 *     sub_1800EF550 @ 0x1800EF550 (sub_1800EF550.c)
 *     sub_180110730 @ 0x180110730 (sub_180110730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D1F94(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 1048640LL;
  if ( a2 != 4 )
    v3 = 64LL;
  return a3 | ((__int64)a1 << 50) | v3;
}
