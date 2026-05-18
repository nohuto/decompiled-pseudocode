/*
 * XREFs of sub_180064B40 @ 0x180064B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064948 @ 0x180064948 (sub_180064948.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180064B40(_QWORD *a1, char a2)
{
  sub_180064948(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
