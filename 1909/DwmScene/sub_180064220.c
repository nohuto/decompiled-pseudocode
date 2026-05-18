/*
 * XREFs of sub_180064220 @ 0x180064220
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006403C @ 0x18006403C (sub_18006403C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180064220(__int64 a1, char a2)
{
  sub_18006403C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
