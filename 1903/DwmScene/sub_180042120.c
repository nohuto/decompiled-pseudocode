/*
 * XREFs of sub_180042120 @ 0x180042120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE974 @ 0x1800CE974 (sub_1800CE974.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180042120(__int64 a1, char a2)
{
  sub_1800CE974();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
