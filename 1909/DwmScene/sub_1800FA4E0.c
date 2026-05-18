/*
 * XREFs of sub_1800FA4E0 @ 0x1800FA4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FA1A4 @ 0x1800FA1A4 (sub_1800FA1A4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FA4E0(_QWORD *a1, char a2)
{
  sub_1800FA1A4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
