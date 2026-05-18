/*
 * XREFs of sub_180043B80 @ 0x180043B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043AFC @ 0x180043AFC (sub_180043AFC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180043B80(_QWORD *a1, char a2)
{
  sub_180043AFC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
