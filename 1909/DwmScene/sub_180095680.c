/*
 * XREFs of sub_180095680 @ 0x180095680
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D23A8 @ 0x1800D23A8 (sub_1800D23A8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180095680(__int64 a1, char a2)
{
  sub_1800D23A8();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
