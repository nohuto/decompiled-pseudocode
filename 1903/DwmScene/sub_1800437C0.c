/*
 * XREFs of sub_1800437C0 @ 0x1800437C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043744 @ 0x180043744 (sub_180043744.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800437C0(_QWORD *a1, char a2)
{
  sub_180043744(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
