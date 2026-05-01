/*
 * XREFs of ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18000DB2C
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001198C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800556C0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x180136E20 (-SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18014F970 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x180151FE0 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180435F30 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
CAutoApplicationCreationResourceGuarantee *__fastcall CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        CAutoApplicationCreationResourceGuarantee *this,
        struct IIAMServiceProvider *a2)
{
  void (__fastcall *v4)(struct IIAMServiceProvider *, GUID *, GUID *, CAutoApplicationCreationResourceGuarantee *); // rsi
  __int64 v5; // rcx
  int v6; // eax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = -2147467259;
  v4 = *(void (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, CAutoApplicationCreationResourceGuarantee *))(*(_QWORD *)a2 + 24LL);
  v5 = *(_QWORD *)this;
  if ( v5 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v4(a2, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &GUID_88b25c81_171b_48b0_91d6_c75846bcf035, this);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
  *((_DWORD *)this + 2) = v6;
  if ( v6 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  return this;
}
