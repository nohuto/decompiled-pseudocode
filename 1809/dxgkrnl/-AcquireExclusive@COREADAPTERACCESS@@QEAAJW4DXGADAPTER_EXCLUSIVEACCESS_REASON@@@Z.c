/*
 * XREFs of ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B1BB0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C00B39B0 (DxgkHandleForceProjectionMonitor.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B4100 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BC27C (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00D0CA0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00F67A0 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F6990 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F71A0 (-DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkFlushPresentHistory @ 0x1C0138770 (DxgkFlushPresentHistory.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01C5790 (DxgkSetMonitorColorSpaceTransform.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01C6278 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D24C0 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D39B8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C01D4510 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C01D7440 (DxgkSetVidPnSourceHwProtection.c)
 *     ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01DDCB0 (-DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EF520 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C01FFA58 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C020E8A4 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C020F24C (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02105C0 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0211AA8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C022C890 (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0283A50 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C028EF00 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0298D60 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001170C (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREADAPTERACCESS::AcquireExclusive(_QWORD *a1, __int64 a2)
{
  COREACCESS *v2; // rdi
  unsigned int v4; // ebp

  v2 = (COREACCESS *)(a1 + 1);
  v4 = a2;
  COREACCESS::AcquireExclusive(a1 + 1, a2);
  if ( *(_DWORD *)(a1[3] + 176LL) == 1 )
  {
    if ( a1[3] == a1[7] )
      return 0LL;
    COREACCESS::AcquireExclusive(a1 + 5, v4);
    if ( *(_DWORD *)(a1[7] + 176LL) == 1 )
      return 0LL;
    COREACCESS::Release((COREACCESS *)(a1 + 5));
  }
  COREACCESS::Release(v2);
  return 3221226166LL;
}
