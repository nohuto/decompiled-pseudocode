/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x18034DBBC
 * Callers:
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x18034E438 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18034E438.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x180351968 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_180351968.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease @ 0x1801D3384 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     ??0?$EventRegistration@UIImmersiveMonitorNotificationService@@UIImmersiveMonitorNotification@@@EventRegistrationHelpers@@QEAA@XZ @ 0x1802C1BBC (--0-$EventRegistration@UIImmersiveMonitorNotificationService@@UIImmersiveMonitorNotification@@@E.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x1802CAF04 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification_____(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    EventRegistrationHelpers::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>((__int64)v5);
    v8 = v6;
    *v6 = off_18042F350;
    v6[2] = *a2;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
