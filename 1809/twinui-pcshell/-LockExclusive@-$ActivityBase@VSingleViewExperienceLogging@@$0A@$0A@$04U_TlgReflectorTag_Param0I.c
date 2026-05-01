/*
 * XREFs of ?LockExclusive@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18003EAE4
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800159D0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18002B490 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x18003DFB0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003EC80 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180041F00 (-StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180041FF0 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800423F0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180043F5C (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180044240 (-StopActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ @ 0x180044530 (-StopActivity@AddWindowToGlom@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ @ 0x1800446E0 (-StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180044890 (-StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180044988 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180044A08 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     ?StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ @ 0x180044AA0 (-StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180044C50 (-StopActivity@ProcessNewWindow@CImmersiveAppTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x1800450B0 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x180045294 (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x180045478 (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x180045694 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180045878 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18004E60C (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006EF78 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0.c)
 *     ?zInternalStop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180077940 (-zInternalStop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 *     ?NotifyFailure@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800F0350 (-NotifyFailure@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x18010C160 (-Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?NotifyFailure@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803AEAA0 (-NotifyFailure@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?NotifyFailure@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1803AEF20 (-NotifyFailure@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0I.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rdi
  PSRWLOCK *p_SRWLock; // rax
  char v5; // bl
  PSRWLOCK v7; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v7) = 0;
  v3 = *(RTL_SRWLOCK **)(a1 + 304);
  if ( v3 )
  {
    v3 += 31;
    AcquireSRWLockExclusive(v3);
    p_SRWLock = &SRWLock;
    SRWLock = v3;
    v5 = 1;
  }
  else
  {
    v7 = 0LL;
    p_SRWLock = &v7;
    v5 = 2;
  }
  *p_SRWLock = 0LL;
  *a2 = v3;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
  }
  if ( (v5 & 1) != 0 && SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return a2;
}
