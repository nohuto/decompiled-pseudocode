/*
 * XREFs of wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64___lambda_617d626f0bf366f050e3b18ed68b910c___ @ 0x1802A8060
 * Callers:
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_0935a17dcf8c46657c105b82d8cca1f2___ @ 0x1802A8310 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Internal--Composable.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_617d626f0bf366f050e3b18ed68b910c___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_617d626f0bf366f050e3b18ed68b910c___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64_ @ 0x1802A9774 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802A9774.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64___lambda_617d626f0bf366f050e3b18ed68b910c___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64___::___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_617d626f0bf366f050e3b18ed68b910c___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_617d626f0bf366f050e3b18ed68b910c___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64_(
           v5,
           a2);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 78LL, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v6);
    __debugbreak();
  }
  return a1;
}
