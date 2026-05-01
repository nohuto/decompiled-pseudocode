/*
 * XREFs of ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x18004806C
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18004BF34 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18004DF20 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x1800F2BA0 (-SetApplicationWindow@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z.c)
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18010A120 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x18010C1F0 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1803B4090 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
CAutoApplicationCreationResourceGuarantee *__fastcall CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        CAutoApplicationCreationResourceGuarantee *this,
        struct IIAMServiceProvider *a2)
{
  __int64 v4; // rcx
  int v5; // eax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = -2147467259;
  v4 = *(_QWORD *)this;
  if ( v4 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  (*(void (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, CAutoApplicationCreationResourceGuarantee *))(*(_QWORD *)a2 + 24LL))(
    a2,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
    this);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this);
  *((_DWORD *)this + 2) = v5;
  if ( v5 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  return this;
}
