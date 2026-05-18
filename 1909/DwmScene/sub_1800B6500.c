/*
 * XREFs of sub_1800B6500 @ 0x1800B6500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F9CF4 @ 0x1800F9CF4 (sub_1800F9CF4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800B6500(__int64 a1, char a2)
{
  sub_1800F9CF4();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
