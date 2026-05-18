/*
 * XREFs of sub_18002E930 @ 0x18002E930
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E3B0 @ 0x18002E3B0 (sub_18002E3B0.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18002E930(_QWORD *a1, char a2)
{
  sub_18002E3B0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
