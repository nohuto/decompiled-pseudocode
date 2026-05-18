/*
 * XREFs of sub_18000E930 @ 0x18000E930
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18000E930(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
