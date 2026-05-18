/*
 * XREFs of sub_1800FB230 @ 0x1800FB230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FB130 @ 0x1800FB130 (sub_1800FB130.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FB230(_QWORD *a1, char a2)
{
  sub_1800FB130(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
