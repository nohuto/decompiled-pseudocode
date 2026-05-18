/*
 * XREFs of sub_180042230 @ 0x180042230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CEA84 @ 0x1800CEA84 (sub_1800CEA84.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180042230(__int64 a1, char a2)
{
  sub_1800CEA84();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
