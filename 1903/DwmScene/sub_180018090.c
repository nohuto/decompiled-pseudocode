/*
 * XREFs of sub_180018090 @ 0x180018090
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017988 @ 0x180017988 (sub_180017988.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180018090(__int64 a1, char a2)
{
  sub_180017988(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
