/*
 * XREFs of sub_1800DF0C0 @ 0x1800DF0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DF02C @ 0x1800DF02C (sub_1800DF02C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DF0C0(_QWORD *a1, char a2)
{
  sub_1800DF02C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
