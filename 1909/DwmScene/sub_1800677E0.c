/*
 * XREFs of sub_1800677E0 @ 0x1800677E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067224 @ 0x180067224 (sub_180067224.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800677E0(__int64 a1, char a2)
{
  sub_180067224(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
