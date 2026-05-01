/*
 * XREFs of wil::details::ScopeExitFn__lambda_6600f9b264d26bf3eb7080891e8c7ed6___::_ScopeExitFn__lambda_6600f9b264d26bf3eb7080891e8c7ed6___ @ 0x18027E368
 * Callers:
 *     __lambda_33af26c9d846f3b9c507d9b825ceee74_::operator()_::_1_::dtor$3 @ 0x18027EF10 (__lambda_33af26c9d846f3b9c507d9b825ceee74_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18025B55C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18027F7E0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_6600f9b264d26bf3eb7080891e8c7ed6___::_ScopeExitFn__lambda_6600f9b264d26bf3eb7080891e8c7ed6___(
        _QWORD **a1)
{
  int v2; // eax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 72LL))(**a1, 0LL);
    if ( v2 < 0 )
      __abi_WinRTraiseException(v2);
    __abi_winrt_ptr_assign(a1[1] + 21, 0LL);
    CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1[1]);
  }
}
