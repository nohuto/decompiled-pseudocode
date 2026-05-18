/*
 * XREFs of sub_180067810 @ 0x180067810
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800672C8 @ 0x1800672C8 (sub_1800672C8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180067810(__int64 a1, char a2)
{
  sub_1800672C8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
