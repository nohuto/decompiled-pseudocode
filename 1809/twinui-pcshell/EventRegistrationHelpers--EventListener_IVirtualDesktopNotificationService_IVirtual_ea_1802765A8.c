/*
 * XREFs of EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x1802765A8
 * Callers:
 *     ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x18026B344 (--1VirtualDesktopNotificationListener@@QEAA@XZ.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x18026B374 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x180273C6C (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotifi.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x1802EF998 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1802EF998.c)
 *     ?v_DismissView@CSnapAssistViewHost@@MEAAXXZ @ 0x1802F03A0 (-v_DismissView@CSnapAssistViewHost@@MEAAXXZ.c)
 *     ?Destroy@VirtualDesktopItemCollection@@UEAAXXZ @ 0x1802F3D40 (-Destroy@VirtualDesktopItemCollection@@UEAAXXZ.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease @ 0x180091624 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2);
    return Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease(v1);
  }
  return result;
}
