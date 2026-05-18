/*
 * XREFs of sub_18000D7D0 @ 0x18000D7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017A5C @ 0x180017A5C (sub_180017A5C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18000D7D0(__int64 a1, char a2)
{
  sub_180017A5C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
