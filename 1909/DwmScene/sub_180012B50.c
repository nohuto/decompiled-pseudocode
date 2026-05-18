/*
 * XREFs of sub_180012B50 @ 0x180012B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800987CC @ 0x1800987CC (sub_1800987CC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180012B50(__int64 a1, char a2)
{
  sub_1800987CC();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
