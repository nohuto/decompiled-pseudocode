/*
 * XREFs of sub_1800DEA10 @ 0x1800DEA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DE924 @ 0x1800DE924 (sub_1800DE924.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DEA10(_QWORD *a1, char a2)
{
  sub_1800DE924(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
