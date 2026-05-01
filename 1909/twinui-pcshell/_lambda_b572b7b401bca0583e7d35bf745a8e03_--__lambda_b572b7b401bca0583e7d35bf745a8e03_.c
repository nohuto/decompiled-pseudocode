/*
 * XREFs of _lambda_b572b7b401bca0583e7d35bf745a8e03_::__lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x1802E3238
 * Callers:
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_7d55139ff1ac6b498cb4a2986c1047e6____::_1_::dtor$0 @ 0x1802DDB0D (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multitasking--ISwitc.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_7753f78d151ec0359928d273266c88c8____::_1_::dtor$0 @ 0x1802DE175 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--C.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_482b3f9570c0e9685e107121a6a2c9e9____::_1_::dtor$0 @ 0x1802DE385 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows_ea_1802DE385.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_47ed099530a2135fa4bc1c4a176c63c9____::_1_::dtor$0 @ 0x1802DE595 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_ead1898829ddc19966a0778afc06ed08____::_1_::dtor$0 @ 0x1802DE7A5 (_Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandl.c)
 *     _XamlAllUpViewHost::Initialize_::_1_::dtor$11 @ 0x1802EA181 (_XamlAllUpViewHost--Initialize_--_1_--dtor$11.c)
 *     _Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_b3d78add5ab39fa35b8b9bbae7ca3aad____::_1_::dtor$0 @ 0x1802F5DC5 (_Windows--Foundation--TypedEventHandler_Windows--Internal--ComposableShell--Multita_ea_1802F5DC5.c)
 *     _XamlAltTabViewHost::Initialize_::_1_::dtor$10 @ 0x1802F8C26 (_XamlAltTabViewHost--Initialize_--_1_--dtor$10.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____lambda_ce333d0cb15dad9de596e78393bdefab____::_1_::dtor$0 @ 0x1802FD9F9 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChange_ea_1802FD9F9.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnContainerNavigate_::_1_::dtor$3 @ 0x180303042 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnContainerNaviga_ea_180303042.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d1____::_1_::dtor$0 @ 0x180305CA0 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_d1cd94c5db2d714c4aabf0680fb425d.c)
 *     _XamlAltTabViewController::OnAltKeyUp_::_1_::dtor$2 @ 0x1803080E4 (_XamlAltTabViewController--OnAltKeyUp_--_1_--dtor$2.c)
 *     _XamlAltTabViewController::UnregisterForEvents_::_1_::dtor$3 @ 0x180308CEF (_XamlAltTabViewController--UnregisterForEvents_--_1_--dtor$3.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$1 @ 0x18030C7A8 (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$1.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$1 @ 0x18030C8B5 (_XamlBaseViewController--DismissView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
