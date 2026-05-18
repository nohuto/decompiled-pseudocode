/*
 * XREFs of sub_180041D50 @ 0x180041D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180041CF8 @ 0x180041CF8 (sub_180041CF8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180041D50(_QWORD *a1, char a2)
{
  sub_180041CF8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
