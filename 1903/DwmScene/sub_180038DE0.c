/*
 * XREFs of sub_180038DE0 @ 0x180038DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038D58 @ 0x180038D58 (sub_180038D58.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180038DE0(_QWORD *a1, char a2)
{
  sub_180038D58(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
