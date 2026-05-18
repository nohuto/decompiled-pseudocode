/*
 * XREFs of sub_1800D1F74 @ 0x1800D1F74
 * Callers:
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800EF550 @ 0x1800EF550 (sub_1800EF550.c)
 *     sub_180110730 @ 0x180110730 (sub_180110730.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D1F74(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 1048608LL;
  if ( a2 != 4 )
    v3 = 32LL;
  return a3 | ((__int64)a1 << 47) | v3;
}
