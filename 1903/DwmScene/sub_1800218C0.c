/*
 * XREFs of sub_1800218C0 @ 0x1800218C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800420C8 @ 0x1800420C8 (sub_1800420C8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800218C0(__int64 a1, char a2)
{
  sub_1800420C8();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
