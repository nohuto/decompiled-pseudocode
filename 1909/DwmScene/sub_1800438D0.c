/*
 * XREFs of sub_1800438D0 @ 0x1800438D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043854 @ 0x180043854 (sub_180043854.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800438D0(_QWORD *a1, char a2)
{
  sub_180043854(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
