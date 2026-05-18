/*
 * XREFs of sub_1800752A0 @ 0x1800752A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180074EBC @ 0x180074EBC (sub_180074EBC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_1800752A0(__int64 a1, char a2)
{
  sub_180074EBC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
