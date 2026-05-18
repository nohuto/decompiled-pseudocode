/*
 * XREFs of sub_18010A6F0 @ 0x18010A6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A4A8 @ 0x18010A4A8 (sub_18010A4A8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18010A6F0(_QWORD *a1, char a2)
{
  sub_18010A4A8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
