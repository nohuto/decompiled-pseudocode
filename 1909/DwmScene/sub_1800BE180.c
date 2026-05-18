/*
 * XREFs of sub_1800BE180 @ 0x1800BE180
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BD4C4 @ 0x1800BD4C4 (sub_1800BD4C4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800BE180(__int64 a1, char a2)
{
  sub_1800BD4C4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
