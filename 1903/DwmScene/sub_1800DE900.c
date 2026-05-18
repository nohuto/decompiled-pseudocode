/*
 * XREFs of sub_1800DE900 @ 0x1800DE900
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DE814 @ 0x1800DE814 (sub_1800DE814.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DE900(_QWORD *a1, char a2)
{
  sub_1800DE814(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
