/*
 * XREFs of sub_1800434E0 @ 0x1800434E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043460 @ 0x180043460 (sub_180043460.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800434E0(_QWORD *a1, char a2)
{
  sub_180043460(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
