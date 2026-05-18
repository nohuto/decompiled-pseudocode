/*
 * XREFs of sub_1800CBAA0 @ 0x1800CBAA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CBA54 @ 0x1800CBA54 (sub_1800CBA54.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CBAA0(_QWORD *a1, char a2)
{
  sub_1800CBA54(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
