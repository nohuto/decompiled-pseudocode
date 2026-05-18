/*
 * XREFs of sub_18010A800 @ 0x18010A800
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A5B8 @ 0x18010A5B8 (sub_18010A5B8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18010A800(_QWORD *a1, char a2)
{
  sub_18010A5B8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
