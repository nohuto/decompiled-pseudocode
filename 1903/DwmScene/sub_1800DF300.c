/*
 * XREFs of sub_1800DF300 @ 0x1800DF300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DF278 @ 0x1800DF278 (sub_1800DF278.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DF300(_QWORD *a1, char a2)
{
  sub_1800DF278(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
