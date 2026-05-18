/*
 * XREFs of sub_1800CFE60 @ 0x1800CFE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CFCA4 @ 0x1800CFCA4 (sub_1800CFCA4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800CFE60(__int64 a1, char a2)
{
  sub_1800CFCA4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
