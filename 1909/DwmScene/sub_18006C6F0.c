/*
 * XREFs of sub_18006C6F0 @ 0x18006C6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006C360 @ 0x18006C360 (sub_18006C360.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18006C6F0(__int64 a1, char a2)
{
  sub_18006C360(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
