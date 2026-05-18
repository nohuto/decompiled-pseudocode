/*
 * XREFs of sub_180018130 @ 0x180018130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BC28 @ 0x18001BC28 (sub_18001BC28.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180018130(__int64 a1, char a2)
{
  sub_18001BC28();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
