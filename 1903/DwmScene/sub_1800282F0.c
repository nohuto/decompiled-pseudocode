/*
 * XREFs of sub_1800282F0 @ 0x1800282F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028174 @ 0x180028174 (sub_180028174.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800282F0(__int64 a1, char a2)
{
  sub_180028174(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
