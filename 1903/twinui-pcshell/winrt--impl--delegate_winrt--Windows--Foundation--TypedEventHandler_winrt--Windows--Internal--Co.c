/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___::type__lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke @ 0x1803FD740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x1803FD270 (_lambda_0b192ff2ee59a0e56115e85b2e997556_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___::type__lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    v4 = a1 + 8;
    v6 = a3;
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v7 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    lambda_0b192ff2ee59a0e56115e85b2e997556_::operator()(v4, &v7, &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    winrt::to_hresult();
  }
  return result;
}
