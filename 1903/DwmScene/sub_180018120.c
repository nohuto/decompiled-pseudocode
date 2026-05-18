/*
 * XREFs of sub_180018120 @ 0x180018120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009D5AC @ 0x18009D5AC (sub_18009D5AC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180018120(__int64 a1, char a2)
{
  sub_18009D5AC();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
