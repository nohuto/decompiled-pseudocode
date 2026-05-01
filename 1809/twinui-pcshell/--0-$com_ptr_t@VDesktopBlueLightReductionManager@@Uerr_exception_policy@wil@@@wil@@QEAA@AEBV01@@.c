/*
 * XREFs of ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180136170
 * Callers:
 *     ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801366C0 (-DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 * Callees:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180136814 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180136814.c)
 */

__int64 *__fastcall wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r10
  __int64 v3; // rcx

  v2 = a1;
  v3 = *a2;
  *v2 = *a2;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::InternalAddRef();
  return v2;
}
