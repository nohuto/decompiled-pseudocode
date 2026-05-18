/*
 * XREFs of sub_1800DFEA0 @ 0x1800DFEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DFDAC @ 0x1800DFDAC (sub_1800DFDAC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DFEA0(_QWORD *a1, char a2)
{
  sub_1800DFDAC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
