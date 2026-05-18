/*
 * XREFs of sub_18010DCA0 @ 0x18010DCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010DC70 @ 0x18010DC70 (sub_18010DC70.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18010DCA0(_QWORD *a1, char a2)
{
  sub_18010DC70(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
