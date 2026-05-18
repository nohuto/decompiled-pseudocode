/*
 * XREFs of sub_180017FD0 @ 0x180017FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095284 @ 0x180095284 (sub_180095284.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_180017FD0(__int64 a1, char a2)
{
  sub_180095284();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
