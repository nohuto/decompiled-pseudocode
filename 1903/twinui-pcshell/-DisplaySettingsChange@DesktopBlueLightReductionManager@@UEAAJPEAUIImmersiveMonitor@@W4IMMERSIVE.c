/*
 * XREFs of ?DisplaySettingsChange@DesktopBlueLightReductionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180160150
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z @ 0x18015F41C (--$DisplaySettingsChange@AEB_NAEA_N@DesktopBlueLightReductionManagerTelemetry@@SAXAEB_NAEA_N@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ac5fb737bfb33d6d7b538363e61dea11___ @ 0x18015F814 (Windows--Internal--ComTaskPool--QueueTask__lambda_ac5fb737bfb33d6d7b538363e61dea11___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801607D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801607D0.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 v8; // rbx
  int v9; // edi
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h]

  v15 = (a3 & 0x28) != 0;
  LOBYTE(v16) = 0;
  try
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    if ( v4 >= 0 )
      LOBYTE(v16) = 1;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v4);
    DesktopBlueLightReductionManagerTelemetry::DisplaySettingsChange<bool const &,bool &>((__int64)&v15, (__int64)&v16);
    if ( v15 )
    {
      v8 = a1 - 112;
      if ( a1 != 112 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 164));
      v11[0] = a1 - 112;
      v11[1] = v17;
      v12 = v16;
      v13 = a1 - 112;
      if ( a1 != 112 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 164));
      v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_ac5fb737bfb33d6d7b538363e61dea11___(
             v6,
             v5,
             *(_DWORD *)(a1 + 92),
             (__int64)v11);
      if ( v13 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v13);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10B,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v9);
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10F,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v7);
  }
  return result;
}
