/*
 * XREFs of ?zInternalStop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180011FD8
 * Callers:
 *     ?StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ @ 0x180011AE0 (-StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x18005F7A0 (-StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AltF4CloseRequested@CAppManagerTelemetry@@MEAAXXZ @ 0x1800F3500 (-StopActivity@AltF4CloseRequested@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x18010E2D0 (-StopActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@MEAAXXZ @ 0x180116B20 (-StopActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@MEAAXXZ @ 0x18029D460 (-StopActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800125C0 (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 */

void __fastcall wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = SRWLock;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
