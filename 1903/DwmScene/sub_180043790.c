/*
 * XREFs of sub_180043790 @ 0x180043790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDB20 @ 0x1800CDB20 (sub_1800CDB20.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180043790(__int64 a1, char a2)
{
  sub_1800CDB20(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
