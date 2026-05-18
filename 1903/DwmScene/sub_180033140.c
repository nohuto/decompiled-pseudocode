/*
 * XREFs of sub_180033140 @ 0x180033140
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032FF8 @ 0x180032FF8 (sub_180032FF8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180033140(_QWORD *a1, char a2)
{
  sub_180032FF8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
