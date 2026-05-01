/*
 * XREFs of ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x18016D2E8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_e061c9838ed53feae5184a4db6d526ff___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_e061c9838ed53feae5184a4db6d526ff___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___ @ 0x1803721E8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1803721E8.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405_____lambda_03ed55f5dacff0e3ac48ac6cf63d3405___ @ 0x18037DDCC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___::CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239_____lambda_3e36c0c19c22f9cf4c6b211da264d239___ @ 0x18042E220 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3e36c0c19c22f9cf4c6b211da264d239___--CTaskW.c)
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
