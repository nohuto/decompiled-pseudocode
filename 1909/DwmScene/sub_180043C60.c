/*
 * XREFs of sub_180043C60 @ 0x180043C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDC20 @ 0x1800CDC20 (sub_1800CDC20.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180043C60(__int64 a1, char a2)
{
  sub_1800CDC20(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
