/*
 * XREFs of sub_1800DEFB0 @ 0x1800DEFB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DEF1C @ 0x1800DEF1C (sub_1800DEF1C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DEFB0(_QWORD *a1, char a2)
{
  sub_1800DEF1C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
