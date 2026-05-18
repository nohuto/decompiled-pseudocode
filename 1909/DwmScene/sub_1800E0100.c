/*
 * XREFs of sub_1800E0100 @ 0x1800E0100
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E0070 @ 0x1800E0070 (sub_1800E0070.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0100(_QWORD *a1, char a2)
{
  sub_1800E0070(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
