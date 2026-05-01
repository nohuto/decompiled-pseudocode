/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180136814
 * Callers:
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180136170 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@.c)
 *     _lambda_d22121731e42b10327825fa05610dd23_::operator() @ 0x1801363A0 (_lambda_d22121731e42b10327825fa05610dd23_--operator().c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801365C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1801365C0.c)
 *     ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801366C0 (-DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 *     ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180136830 (-OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x180136AC0 (-OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 164), a2);
}
