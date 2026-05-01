/*
 * XREFs of ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003EA40
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___ @ 0x18003E6CC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___.c)
 *     ??_E?$CTaskWrapper@V_lambda_daccc0ce4e4d7134eefbda54bca36657_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180041360 (--_E-$CTaskWrapper@V_lambda_daccc0ce4e4d7134eefbda54bca36657_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180043C00 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1800467D8 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180046A3C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180047AE8 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180048250 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18004ADFC (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ??1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18004DEF4 (--1ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18004DF20 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ??1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ @ 0x1800EB3D4 (--1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ @ 0x1800EBA30 (--1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ @ 0x1800EBB0C (--1HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ??1OnShellHookMessage@IamTraceLogging@@QEAA@XZ @ 0x1800EBB48 (--1OnShellHookMessage@IamTraceLogging@@QEAA@XZ.c)
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1800EEFD0 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1800F79CC (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ??1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107D50 (--1ConsolidateView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107E00 (--1PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107E2C (--1PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1SplitView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107E58 (--1SplitView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107E84 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107EB0 (--1WindowProvided@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x180108F20 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     ?SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z @ 0x18010C1F0 (-SplitView@CAppViewManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@PEAPEAU3@@Z.c)
 *     ?_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x1801110EC (-_PrepareToSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUI.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1801112A8 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 *     ??1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1801198D0 (--1DeleteWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1801198FC (--1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1Initialization@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180119928 (--1Initialization@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1ProcessNewWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180119988 (--1ProcessNewWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1801199B4 (--1SetApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1801199E0 (--1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ??1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180119A0C (--1SetViewPosition@CImmersiveAppTelemetry@@QEAA@XZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18011B064 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x18011F930 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180120260 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180126ED0 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ @ 0x180126F74 (--1ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180127010 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E4E0 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F3074 (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(_QWORD *a1)
{
  RTL_SRWLOCK *v1; // rsi
  char v3; // bp
  _DWORD *v4; // rcx
  RTL_SRWLOCK *v5; // rsi
  volatile signed __int32 *v6; // rcx
  char *v7; // rdi
  __int64 v8; // rdx
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (RTL_SRWLOCK *)a1[38];
  v3 = 1;
  if ( !v1 )
    goto LABEL_2;
  v5 = v1 + 31;
  AcquireSRWLockExclusive(v5);
  v6 = (volatile signed __int32 *)a1[38];
  if ( !v6 || *v6 != 1 )
  {
    v3 = 0;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      {
        v7 = (char *)a1[38];
        if ( v7 )
        {
          wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v7 + 8);
          operator delete(v7, (const struct std::nothrow_t *)0x100);
        }
      }
      a1[38] = 0LL;
    }
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v3 )
  {
LABEL_2:
    v4 = (_DWORD *)a1[6];
    if ( *v4 == 1 )
    {
      v9[0] = v4[21];
      v8 = 2147942974LL;
      if ( v9[0] < 0 )
        v8 = (unsigned int)v9[0];
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v8,
        v9);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
