/*
 * XREFs of sub_180018070 @ 0x180018070
 * Callers:
 *     ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA @ 0x18012836B (-catch$0@-0---$_Resetp@V__ExceptionPtr@@@-$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__Exceptio.c)
 * Callees:
 *     sub_1800B5F48 @ 0x1800B5F48 (sub_1800B5F48.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

__int64 __fastcall sub_180018070(__int64 a1, char a2)
{
  sub_1800B5F48();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
