/*
 * XREFs of sub_180018160 @ 0x180018160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017C94 @ 0x180017C94 (sub_180017C94.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180018160(__int64 a1, char a2)
{
  sub_180017C94(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
