/*
 * XREFs of sub_1800FFC00 @ 0x1800FFC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FF97C @ 0x1800FF97C (sub_1800FF97C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FFC00(_QWORD *a1, char a2)
{
  sub_1800FF97C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
