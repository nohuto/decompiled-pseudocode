/*
 * XREFs of sub_180112650 @ 0x180112650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011212C @ 0x18011212C (sub_18011212C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180112650(_QWORD *a1, char a2)
{
  sub_18011212C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
