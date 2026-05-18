/*
 * XREFs of sub_18002E820 @ 0x18002E820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E2A0 @ 0x18002E2A0 (sub_18002E2A0.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18002E820(_QWORD *a1, char a2)
{
  sub_18002E2A0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
