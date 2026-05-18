/*
 * XREFs of sub_180112760 @ 0x180112760
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011223C @ 0x18011223C (sub_18011223C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180112760(_QWORD *a1, char a2)
{
  sub_18011223C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
