/*
 * XREFs of sub_180043C90 @ 0x180043C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043C0C @ 0x180043C0C (sub_180043C0C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180043C90(_QWORD *a1, char a2)
{
  sub_180043C0C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
