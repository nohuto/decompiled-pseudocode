/*
 * XREFs of sub_1800D1930 @ 0x1800D1930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1780 @ 0x1800D1780 (sub_1800D1780.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800D1930(__int64 a1, char a2)
{
  sub_1800D1780(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
