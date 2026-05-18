/*
 * XREFs of sub_1800DFFF0 @ 0x1800DFFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DFF60 @ 0x1800DFF60 (sub_1800DFF60.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DFFF0(_QWORD *a1, char a2)
{
  sub_1800DFF60(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
