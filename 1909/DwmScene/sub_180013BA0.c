/*
 * XREFs of sub_180013BA0 @ 0x180013BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013B14 @ 0x180013B14 (sub_180013B14.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180013BA0(__int64 a1, char a2)
{
  sub_180013B14(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
