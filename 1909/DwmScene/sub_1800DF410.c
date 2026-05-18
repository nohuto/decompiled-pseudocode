/*
 * XREFs of sub_1800DF410 @ 0x1800DF410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DF388 @ 0x1800DF388 (sub_1800DF388.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DF410(_QWORD *a1, char a2)
{
  sub_1800DF388(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
