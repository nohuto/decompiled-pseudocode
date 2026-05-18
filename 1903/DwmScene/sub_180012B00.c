/*
 * XREFs of sub_180012B00 @ 0x180012B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800986BC @ 0x1800986BC (sub_1800986BC.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180012B00(__int64 a1, char a2)
{
  sub_1800986BC();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
