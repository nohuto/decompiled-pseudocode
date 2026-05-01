/*
 * XREFs of ??1VirtualDesktopNotificationListener@@QEAA@XZ @ 0x18026B344
 * Callers:
 *     ??_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z @ 0x1802EBB40 (--_GVirtualDesktopThumbnailWindowFilter@@UEAAPEAXI@Z.c)
 *     ??1CSnapAssistViewHost@@UEAA@XZ @ 0x1802EF2E0 (--1CSnapAssistViewHost@@UEAA@XZ.c)
 *     ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x1802F3BB0 (--_EVirtualDesktopItemCollection@@UEAAPEAXI@Z.c)
 *     ??1SwitchItemFilteredCollection@@UEAA@XZ @ 0x1802F4CC8 (--1SwitchItemFilteredCollection@@UEAA@XZ.c)
 * Callees:
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease @ 0x180091624 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister @ 0x1802765A8 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1802765A8.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopNotificationListener::~VirtualDesktopNotificationListener(
        VirtualDesktopNotificationListener *this)
{
  EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Unregister(this);
  Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease((__int64 *)this + 1);
}
