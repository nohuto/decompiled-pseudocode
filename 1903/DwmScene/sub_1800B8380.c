/*
 * XREFs of sub_1800B8380 @ 0x1800B8380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B7E94 @ 0x1800B7E94 (sub_1800B7E94.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800B8380(_QWORD *a1, char a2)
{
  sub_1800B7E94(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
