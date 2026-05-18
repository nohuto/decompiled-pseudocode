/*
 * XREFs of sub_1800CDF40 @ 0x1800CDF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDB94 @ 0x1800CDB94 (sub_1800CDB94.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CDF40(_QWORD *a1, char a2)
{
  sub_1800CDB94(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
