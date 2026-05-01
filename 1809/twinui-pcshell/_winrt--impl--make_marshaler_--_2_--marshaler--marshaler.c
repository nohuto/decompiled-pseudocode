/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::marshaler @ 0x180396ED4
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::QueryInterface @ 0x180397930 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--I.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x18039837C (_winrt--impl--make_marshaler_--_2_--marshaler--get_marshaler.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::marshaler(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 *marshaler; // rax
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a1 = off_1803FE8F8;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  marshaler = (__int64 *)winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler(&v8);
  v6 = *marshaler;
  *marshaler = 0LL;
  *(_QWORD *)(a1 + 16) = v6;
  if ( v8 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&v8);
  *(_DWORD *)(a1 + 24) = 1;
  if ( *v4 != a2 )
  {
    if ( *v4 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v4);
    *v4 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return a1;
}
