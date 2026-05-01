/*
 * XREFs of EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x1802ED988
 * Callers:
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802EE150 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::_ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_ @ 0x1800915F4 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--_ComPtr__.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease @ 0x180091624 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification_____ptr64_&___ptr64_ @ 0x1802ED0E4 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x1e.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h]

  v2 = a1 + 1;
  v4 = a1[1];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
    Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease(v2);
  }
  v13 = 0LL;
  Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease(&v13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification_____ptr64_____ptr64_(
         &v13,
         a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 60LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"internal\\shell\\private\\inc\\EventRegistrationHelpers.h",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 61LL;
    goto LABEL_7;
  }
  v9 = *v2;
  v10 = v13;
  if ( *v2 != v13 )
  {
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v9 = *v2;
    }
    v14 = v9;
    *v2 = v10;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::_ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_();
  }
  v7 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease(&v13);
  return v7;
}
