/*
 * XREFs of sub_180018040 @ 0x180018040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095394 @ 0x180095394 (sub_180095394.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180018040(__int64 a1, char a2)
{
  sub_180095394();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
