/*
 * XREFs of sub_180064B70 @ 0x180064B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064A1C @ 0x180064A1C (sub_180064A1C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180064B70(__int64 a1, char a2)
{
  sub_180064A1C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
