/*
 * XREFs of sub_18002E7F0 @ 0x18002E7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E1CC @ 0x18002E1CC (sub_18002E1CC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18002E7F0(_QWORD *a1, char a2)
{
  sub_18002E1CC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
