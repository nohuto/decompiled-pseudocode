/*
 * XREFs of sub_180101CF0 @ 0x180101CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180101C84 @ 0x180101C84 (sub_180101C84.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180101CF0(_QWORD *a1, char a2)
{
  sub_180101C84(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
