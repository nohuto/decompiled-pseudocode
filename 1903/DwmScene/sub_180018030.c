/*
 * XREFs of sub_180018030 @ 0x180018030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009F03C @ 0x18009F03C (sub_18009F03C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180018030(__int64 a1, char a2)
{
  sub_18009F03C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
