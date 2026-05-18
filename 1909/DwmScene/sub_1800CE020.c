/*
 * XREFs of sub_1800CE020 @ 0x1800CE020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDC60 @ 0x1800CDC60 (sub_1800CDC60.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CE020(_QWORD *a1, char a2)
{
  sub_1800CDC60(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
