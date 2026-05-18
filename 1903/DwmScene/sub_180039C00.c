/*
 * XREFs of sub_180039C00 @ 0x180039C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039830 @ 0x180039830 (sub_180039830.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180039C00(_QWORD *a1, char a2)
{
  sub_180039830(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
