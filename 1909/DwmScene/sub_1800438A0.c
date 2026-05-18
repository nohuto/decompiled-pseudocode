/*
 * XREFs of sub_1800438A0 @ 0x1800438A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDC30 @ 0x1800CDC30 (sub_1800CDC30.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800438A0(__int64 a1, char a2)
{
  sub_1800CDC30(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
