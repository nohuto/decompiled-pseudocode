/*
 * XREFs of sub_18000D7D0 @ 0x18000D7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800179EC @ 0x1800179EC (sub_1800179EC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_18000D7D0(__int64 a1, char a2)
{
  sub_1800179EC();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
