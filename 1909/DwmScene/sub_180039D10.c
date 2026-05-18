/*
 * XREFs of sub_180039D10 @ 0x180039D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039940 @ 0x180039940 (sub_180039940.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180039D10(_QWORD *a1, char a2)
{
  sub_180039940(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
