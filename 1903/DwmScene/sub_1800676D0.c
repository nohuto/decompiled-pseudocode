/*
 * XREFs of sub_1800676D0 @ 0x1800676D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067114 @ 0x180067114 (sub_180067114.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_1800676D0(__int64 a1, char a2)
{
  sub_180067114(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
