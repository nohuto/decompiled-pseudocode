/*
 * XREFs of sub_180028430 @ 0x180028430
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028354 @ 0x180028354 (sub_180028354.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180028430(_QWORD *a1, char a2)
{
  sub_180028354(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
