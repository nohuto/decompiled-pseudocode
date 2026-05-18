/*
 * XREFs of sub_180044050 @ 0x180044050
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043FCC @ 0x180043FCC (sub_180043FCC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180044050(_QWORD *a1, char a2)
{
  sub_180043FCC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
