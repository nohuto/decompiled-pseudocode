/*
 * XREFs of sub_180043F40 @ 0x180043F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043EBC @ 0x180043EBC (sub_180043EBC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180043F40(_QWORD *a1, char a2)
{
  sub_180043EBC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
