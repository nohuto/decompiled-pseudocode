/*
 * XREFs of sub_1800CFD80 @ 0x1800CFD80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CFCC0 @ 0x1800CFCC0 (sub_1800CFCC0.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CFD80(_QWORD *a1, char a2)
{
  sub_1800CFCC0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
