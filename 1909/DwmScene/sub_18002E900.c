/*
 * XREFs of sub_18002E900 @ 0x18002E900
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E2DC @ 0x18002E2DC (sub_18002E2DC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18002E900(_QWORD *a1, char a2)
{
  sub_18002E2DC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
