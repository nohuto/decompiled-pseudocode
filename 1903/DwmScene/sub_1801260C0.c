/*
 * XREFs of sub_1801260C0 @ 0x1801260C0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1801260C0(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free();
  return a1;
}
