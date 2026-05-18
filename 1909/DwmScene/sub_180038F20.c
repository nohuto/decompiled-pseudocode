/*
 * XREFs of sub_180038F20 @ 0x180038F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D30E8 @ 0x1800D30E8 (sub_1800D30E8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180038F20(__int64 a1, char a2)
{
  sub_1800D30E8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
