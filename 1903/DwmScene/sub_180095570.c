/*
 * XREFs of sub_180095570 @ 0x180095570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D2298 @ 0x1800D2298 (sub_1800D2298.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180095570(__int64 a1, char a2)
{
  sub_1800D2298();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
