/*
 * XREFs of sub_1800DFC50 @ 0x1800DFC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DFB60 @ 0x1800DFB60 (sub_1800DFB60.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DFC50(_QWORD *a1, char a2)
{
  sub_1800DFB60(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
