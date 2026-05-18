/*
 * XREFs of sub_1800CE050 @ 0x1800CE050
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDCA4 @ 0x1800CDCA4 (sub_1800CDCA4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CE050(_QWORD *a1, char a2)
{
  sub_1800CDCA4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
