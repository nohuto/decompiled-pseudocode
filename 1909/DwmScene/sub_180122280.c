/*
 * XREFs of sub_180122280 @ 0x180122280
 * Callers:
 *     <none>
 * Callees:
 *     sub_180122090 @ 0x180122090 (sub_180122090.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180122280(__int64 a1, char a2)
{
  sub_180122090(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
