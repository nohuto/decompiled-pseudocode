/*
 * XREFs of sub_18006C5E0 @ 0x18006C5E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_18006C5E0(__int64 a1, char a2)
{
  sub_18006C250(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
