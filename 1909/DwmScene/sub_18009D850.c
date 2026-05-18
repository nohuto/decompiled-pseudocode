/*
 * XREFs of sub_18009D850 @ 0x18009D850
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009D5D4 @ 0x18009D5D4 (sub_18009D5D4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18009D850(_QWORD *a1, char a2)
{
  sub_18009D5D4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
