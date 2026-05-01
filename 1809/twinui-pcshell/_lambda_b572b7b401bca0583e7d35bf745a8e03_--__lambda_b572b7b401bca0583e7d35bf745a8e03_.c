/*
 * XREFs of _lambda_b572b7b401bca0583e7d35bf745a8e03_::__lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x18026AC14
 * Callers:
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_7d55139ff1ac6b498cb4a2986c1047e6____::_1_::dtor$0 @ 0x1802656DD (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitasking--ISwitc.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____ptr64___lambda_bd641f78481868be629ded61accc2e50____::_1_::dtor$0 @ 0x180265D45 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--C.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_1b5508b209f22f7e86a2f99e7c3de27f____::_1_::dtor$0 @ 0x180265F59 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows_ea_180265F59.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64___lambda_3b34480ad7d2973204f2b7367543a8f5____::_1_::dtor$0 @ 0x18026616D (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_d66e6f301efedd367be46813d365bb79____::_1_::dtor$0 @ 0x180266381 (_Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandl.c)
 *     _XamlAllUpViewHost::Initialize_::_1_::dtor$11 @ 0x180271A01 (_XamlAllUpViewHost--Initialize_--_1_--dtor$11.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64_::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_____ptr64_Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____ptr64___lambda_c53c31f493f45602bf86f747ba99140c____::_1_::dtor$0 @ 0x18027D021 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_18027D021.c)
 *     _XamlAltTabViewHost::Initialize_::_1_::dtor$10 @ 0x18028006F (_XamlAltTabViewHost--Initialize_--_1_--dtor$10.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64___lambda_691217d92eb9936284588ea727e6ccf8____::_1_::dtor$0 @ 0x180284E39 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChange_ea_180284E39.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnContainerNavigate_::_1_::dtor$3 @ 0x18028A462 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnContainerNaviga_ea_18028A462.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1____::_1_::dtor$0 @ 0x18028D0D0 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d.c)
 *     _XamlAltTabViewController::OnAltKeyUp_::_1_::dtor$2 @ 0x18028F514 (_XamlAltTabViewController--OnAltKeyUp_--_1_--dtor$2.c)
 *     _XamlAltTabViewController::UnregisterForEvents_::_1_::dtor$3 @ 0x1802900AB (_XamlAltTabViewController--UnregisterForEvents_--_1_--dtor$3.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$1 @ 0x1802948D8 (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$1.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$1 @ 0x1802949E5 (_XamlBaseViewController--DismissView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b572b7b401bca0583e7d35bf745a8e03_::__lambda_b572b7b401bca0583e7d35bf745a8e03_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
