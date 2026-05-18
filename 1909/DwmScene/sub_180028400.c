/*
 * XREFs of sub_180028400 @ 0x180028400
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180028400(__int64 a1, char a2)
{
  sub_180028284(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
