/*
 * XREFs of ?catch$0@?0???$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z@4HA_0 @ 0x18012E7D3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008973C @ 0x18008973C (sub_18008973C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn `std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>'::`1'::catch$0(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 72);
  if ( v2 )
    sub_18008973C(v2, 1);
  throw;
}
