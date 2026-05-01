/*
 * XREFs of ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040170
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8bf19a67da9349d708dd7efffc5e2d17___ @ 0x18003FDCC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8bf19a67da9349d708dd7efffc5e2d17___.c)
 *     ??_E?$CTaskWrapper@V_lambda_dac6902843ce9a48b723fe5594935719_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180041290 (--_E-$CTaskWrapper@V_lambda_dac6902843ce9a48b723fe5594935719_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1800499E0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ??1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1800EB400 (--1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1800F7BC8 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107DD4 (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x18011404C (--1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180126FA0 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800EB0C4 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800EB0C4.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  RTL_SRWLOCK *v1; // rsi
  char v3; // bp
  RTL_SRWLOCK *v4; // rsi
  volatile signed __int32 *v5; // rcx
  _DWORD *v6; // rcx
  char *v7; // rdi
  __int64 v8; // rdx
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (RTL_SRWLOCK *)a1[38];
  v3 = 1;
  if ( !v1 )
    goto LABEL_10;
  v4 = v1 + 31;
  AcquireSRWLockExclusive(v4);
  v5 = (volatile signed __int32 *)a1[38];
  if ( !v5 || *v5 != 1 )
  {
    v3 = 0;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
      {
        v7 = (char *)a1[38];
        if ( v7 )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v7 + 8);
          operator delete(v7, (const struct std::nothrow_t *)0x100);
        }
      }
      a1[38] = 0LL;
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v3 )
  {
LABEL_10:
    v6 = (_DWORD *)a1[6];
    if ( *v6 == 1 )
    {
      v9[0] = v6[21];
      v8 = 2147942974LL;
      if ( v9[0] < 0 )
        v8 = (unsigned int)v9[0];
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v6,
        v8,
        v9);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
