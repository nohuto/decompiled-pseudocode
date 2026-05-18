/*
 * XREFs of sub_18009F230 @ 0x18009F230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009EF84 @ 0x18009EF84 (sub_18009EF84.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18009F230(_QWORD *a1, char a2)
{
  sub_18009EF84(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
