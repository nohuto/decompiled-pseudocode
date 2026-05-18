/*
 * XREFs of sub_18008973C @ 0x18008973C
 * Callers:
 *     ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA_0 @ 0x18012E7D3 (-catch$0@-0---$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXP_ea_18012E7D3.c)
 * Callees:
 *     sub_1800895AC @ 0x1800895AC (sub_1800895AC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_18008973C(__int64 a1, char a2)
{
  sub_1800895AC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
