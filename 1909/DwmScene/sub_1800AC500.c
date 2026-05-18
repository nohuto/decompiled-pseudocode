/*
 * XREFs of sub_1800AC500 @ 0x1800AC500
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ABED8 @ 0x1800ABED8 (sub_1800ABED8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800AC500(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800ABED8(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
