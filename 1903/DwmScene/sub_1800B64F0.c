/*
 * XREFs of sub_1800B64F0 @ 0x1800B64F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1624 @ 0x1800D1624 (sub_1800D1624.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800B64F0(__int64 a1, char a2)
{
  sub_1800D1624(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
