/*
 * XREFs of sub_180064A30 @ 0x180064A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064838 @ 0x180064838 (sub_180064838.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180064A30(_QWORD *a1, char a2)
{
  sub_180064838(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
