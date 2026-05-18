/*
 * XREFs of sub_18008962C @ 0x18008962C
 * Callers:
 *     ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA_0 @ 0x18012E6C3 (-catch$0@-0---$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXP_ea_18012E6C3.c)
 * Callees:
 *     sub_18008949C @ 0x18008949C (sub_18008949C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_18008962C(__int64 a1, char a2)
{
  sub_18008949C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
