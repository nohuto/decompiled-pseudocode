/*
 * XREFs of sub_180101BE0 @ 0x180101BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180101B74 @ 0x180101B74 (sub_180101B74.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180101BE0(_QWORD *a1, char a2)
{
  sub_180101B74(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
