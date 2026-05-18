/*
 * XREFs of sub_18009D740 @ 0x18009D740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009D4C4 @ 0x18009D4C4 (sub_18009D4C4.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18009D740(_QWORD *a1, char a2)
{
  sub_18009D4C4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
