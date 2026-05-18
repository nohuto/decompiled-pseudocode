/*
 * XREFs of sub_180064110 @ 0x180064110
 * Callers:
 *     <none>
 * Callees:
 *     sub_180063F2C @ 0x180063F2C (sub_180063F2C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180064110(__int64 a1, char a2)
{
  sub_180063F2C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
