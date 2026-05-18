/*
 * XREFs of sub_180075240 @ 0x180075240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180089588 @ 0x180089588 (sub_180089588.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180075240(__int64 a1, char a2)
{
  sub_180089588(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
