/*
 * XREFs of _lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator() @ 0x1802D7DD0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_796fecced70d9b3590d5bb3fa9fcc2e4___::_ScopeExitFn__lambda_796fecced70d9b3590d5bb3fa9fcc2e4___ @ 0x1802D79BC (wil--details--ScopeExitFn__lambda_796fecced70d9b3590d5bb3fa9fcc2e4___--_ScopeExitFn__lambda_796f.c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x1802D818C (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802B2F9C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x1802E9598 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 */

__int64 __fastcall lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator()(__int64 a1)
{
  int v2; // eax

  XamlAltTabViewController::UnregisterForEvents(**(_QWORD **)a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(a1 + 8) + 72LL))(**(_QWORD **)(a1 + 8), 0LL);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  __abi_winrt_ptr_assign((__int64 *)(*(_QWORD *)(a1 + 16) + 168LL), 0LL);
  return CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(*(_QWORD *)(a1 + 16));
}
