/*
 * XREFs of sub_18010DDB0 @ 0x18010DDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010DD80 @ 0x18010DD80 (sub_18010DD80.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18010DDB0(_QWORD *a1, char a2)
{
  sub_18010DD80(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
