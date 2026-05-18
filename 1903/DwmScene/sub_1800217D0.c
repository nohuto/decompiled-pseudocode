/*
 * XREFs of sub_1800217D0 @ 0x1800217D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020518 @ 0x180020518 (sub_180020518.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800217D0(_QWORD *a1, char a2)
{
  sub_180020518(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
