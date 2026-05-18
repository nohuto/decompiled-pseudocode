/*
 * XREFs of sub_180021860 @ 0x180021860
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800205F0 @ 0x1800205F0 (sub_1800205F0.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180021860(__int64 a1, char a2)
{
  sub_1800205F0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
