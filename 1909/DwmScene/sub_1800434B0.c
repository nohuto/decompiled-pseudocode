/*
 * XREFs of sub_1800434B0 @ 0x1800434B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE00C @ 0x1800CE00C (sub_1800CE00C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800434B0(__int64 a1, char a2)
{
  sub_1800CE00C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
