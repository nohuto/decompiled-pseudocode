/*
 * XREFs of sub_1800D1F54 @ 0x1800D1F54
 * Callers:
 *     sub_1800EF550 @ 0x1800EF550 (sub_1800EF550.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D1F54(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 524292LL;
  if ( a2 != 4 )
    v3 = 4LL;
  return a3 | ((__int64)a1 << 41) | v3;
}
