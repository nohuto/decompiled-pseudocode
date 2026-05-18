/*
 * XREFs of sub_180021A00 @ 0x180021A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800426D8 @ 0x1800426D8 (sub_1800426D8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180021A00(__int64 a1, char a2)
{
  sub_1800426D8();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
