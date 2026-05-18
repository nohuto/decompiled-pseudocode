/*
 * XREFs of sub_1800DFD90 @ 0x1800DFD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DFC9C @ 0x1800DFC9C (sub_1800DFC9C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DFD90(_QWORD *a1, char a2)
{
  sub_1800DFC9C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
