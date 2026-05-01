/*
 * XREFs of WPP_SF_d @ 0x18014022C
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180048430 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800556C0 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180066C6C (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180136030 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x180144C80 (-OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SE.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180146FB8 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18014777C (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x180157614 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_d(TRACEHANDLE a1, USHORT a2, const GUID *a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return TraceMessage(a1, 0x2Bu, a3, a2, &v5, 4LL, 0LL);
}
