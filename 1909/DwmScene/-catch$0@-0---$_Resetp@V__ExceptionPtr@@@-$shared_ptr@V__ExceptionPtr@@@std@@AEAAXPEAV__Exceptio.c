/*
 * XREFs of ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA @ 0x18012836B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018070 @ 0x180018070 (sub_180018070.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn `std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>'::`1'::catch$0(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 72);
  if ( v2 )
    sub_180018070(v2, 1);
  throw;
}
