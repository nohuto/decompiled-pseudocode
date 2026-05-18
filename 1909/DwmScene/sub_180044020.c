/*
 * XREFs of sub_180044020 @ 0x180044020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDC40 @ 0x1800CDC40 (sub_1800CDC40.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180044020(__int64 a1, char a2)
{
  sub_1800CDC40(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
