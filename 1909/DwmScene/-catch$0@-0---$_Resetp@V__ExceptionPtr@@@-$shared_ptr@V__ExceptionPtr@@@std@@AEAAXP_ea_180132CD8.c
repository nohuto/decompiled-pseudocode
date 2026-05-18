/*
 * XREFs of ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA_1 @ 0x180132CD8
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FD4D4 @ 0x1800FD4D4 (sub_1800FD4D4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn `std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>'::`1'::catch$0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)(a2 + 72);
  if ( v2 )
    sub_1800FD4D4(v2, 1LL);
  throw;
}
