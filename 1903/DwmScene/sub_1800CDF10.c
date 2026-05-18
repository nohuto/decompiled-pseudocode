/*
 * XREFs of sub_1800CDF10 @ 0x1800CDF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDB50 @ 0x1800CDB50 (sub_1800CDB50.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CDF10(_QWORD *a1, char a2)
{
  sub_1800CDB50(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
