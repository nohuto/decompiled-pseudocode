/*
 * XREFs of sub_180075270 @ 0x180075270
 * Callers:
 *     <none>
 * Callees:
 *     sub_180074A0C @ 0x180074A0C (sub_180074A0C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180075270(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180074A0C(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
