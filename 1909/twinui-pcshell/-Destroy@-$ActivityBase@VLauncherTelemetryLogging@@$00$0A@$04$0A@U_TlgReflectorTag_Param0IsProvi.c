/*
 * XREFs of ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180038BF4
 * Callers:
 *     ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800385F0 (-GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x1803112C8 (--1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x1803112F4 (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ @ 0x180311320 (--1UnsubscribeFromServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18031DE90 (--1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x18031DEBC (--1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x18031DEE8 (--1FocusHoldingTank@@QEAA@XZ.c)
 *     ?s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18031F300 (-s_WndProc@FocusHoldingTank@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180011090 (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?ReportStopActivity@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180038AD0 (-ReportStopActivity@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180137504 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18031621C (-reset@-$shared_object@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_ea_18031621C.c)
 */

void __fastcall wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rdi
  _DWORD *v3; // rcx
  char v4; // si
  __int64 v5; // rdx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 38;
  if ( !a1[38] )
    goto LABEL_2;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v4 )
  {
LABEL_2:
    v3 = (_DWORD *)a1[6];
    if ( *v3 == 1 )
    {
      LODWORD(SRWLock) = v3[21];
      v5 = 2147942974LL;
      if ( (int)SRWLock < 0 )
        v5 = (unsigned int)SRWLock;
      wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v3,
        v5,
        &SRWLock);
      wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        a1,
        (int)SRWLock);
    }
  }
}
