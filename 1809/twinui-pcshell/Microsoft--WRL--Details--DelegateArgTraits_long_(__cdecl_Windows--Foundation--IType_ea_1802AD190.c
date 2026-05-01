/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_617d626f0bf366f050e3b18ed68b910c___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64_::Invoke @ 0x1802AD190
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800ED98C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_617d626f0bf366f050e3b18ed68b910c_::operator() @ 0x1802AA5F4 (_lambda_617d626f0bf366f050e3b18ed68b910c_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64___::___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_617d626f0bf366f050e3b18ed68b910c___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs_____ptr64_::Invoke(
        __int64 a1,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        __int64 a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_617d626f0bf366f050e3b18ed68b910c_::operator()(a1 + 64, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
