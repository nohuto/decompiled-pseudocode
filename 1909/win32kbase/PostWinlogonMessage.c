/*
 * XREFs of PostWinlogonMessage @ 0x1C00679D0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0035D10 (DestroyProcessInfo.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxDwmControl @ 0x1C0067960 (xxxDwmControl.c)
 *     PowerOffMonitor @ 0x1C00B0FB0 (PowerOffMonitor.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0106BA0 (VideoPortCalloutThread.c)
 *     ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015BD00 (-FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?HighContrastHotKey@@YAHPEAUtagKE@@KH@Z @ 0x1C015C150 (-HighContrastHotKey@@YAHPEAUtagKE@@KH@Z.c)
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015C2C0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015C6E0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C015D940 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015DD10 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0067D50 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     WmsgpPostMessage @ 0x1C0246224 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  int v3; // edi

  v2 = a1;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  v3 = WmsgpPostMessage(a1, (unsigned int)a1, a2);
  if ( v3 >= 0 && v2 == 1027 )
  {
    CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
    if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
      SetTimerCoalescingTolerance(3LL);
  }
  return (unsigned int)v3;
}
