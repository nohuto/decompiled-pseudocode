/*
 * XREFs of ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x1801248F8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64___::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____ptr64___lambda_e061c9838ed53feae5184a4db6d526ff___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____ptr64___lambda_e061c9838ed53feae5184a4db6d526ff___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____ptr64_ @ 0x1802F1EB8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802F1EB8.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___::CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743_____lambda_625ab5e37b66b38d06a79fa4ea4f4743___ @ 0x1802FDC4C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_625ab5e37b66b38d06a79fa4ea4f4743___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239_____lambda_3e36c0c19c22f9cf4c6b211da264d239___ @ 0x1803AC94C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___--CTaskW.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMarshaledInterface::CMarshaledInterface(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  return a1;
}
