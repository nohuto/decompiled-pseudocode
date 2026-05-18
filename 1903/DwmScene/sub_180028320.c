/*
 * XREFs of sub_180028320 @ 0x180028320
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028244 @ 0x180028244 (sub_180028244.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180028320(_QWORD *a1, char a2)
{
  sub_180028244(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
