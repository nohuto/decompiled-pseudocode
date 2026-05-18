/*
 * XREFs of sub_180103D10 @ 0x180103D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180103BEC @ 0x180103BEC (sub_180103BEC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180103D10(_QWORD *a1, char a2)
{
  sub_180103BEC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
