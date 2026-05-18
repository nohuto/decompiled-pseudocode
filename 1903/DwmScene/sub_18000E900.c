/*
 * XREFs of sub_18000E900 @ 0x18000E900
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E85C @ 0x18000E85C (sub_18000E85C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18000E900(_QWORD *a1, char a2)
{
  sub_18000E85C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
