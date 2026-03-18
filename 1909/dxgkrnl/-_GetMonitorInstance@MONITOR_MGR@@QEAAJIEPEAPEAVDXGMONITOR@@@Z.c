/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C00D05B0 (DpiPdoDispatchIoctl.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00D7438 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00D9234 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00DCCF8 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DDF98 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DFAE8 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C00EC2D0 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00EC548 (MonitorGetMonitorOrientationsFromTarget.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00ECB40 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C00EDC78 (MonitorGetLinkInfoFromTarget.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00F5A10 (IsVirtualizationDisabledForTarget.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00F6060 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0100EEC (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C0128BB0 (MonitorSetLastWireformatAndColorspace.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01291C0 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C012EAA8 (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C012EC74 (MonitorGetPreferredScaleFactor.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0130024 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     MonitorGetDeviceObject @ 0x1C0142A34 (MonitorGetDeviceObject.c)
 *     MonitorIsMonitorConnected @ 0x1C014CE24 (MonitorIsMonitorConnected.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01577C0 (DpiPdoDispatchInternalIoctl.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C01733E0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0175624 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C01759BC (MonitorGetContainerIDFromDescriptor.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C017748C (MonitorGetMonitorDescriptorIDs.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179630 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179CF4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179E5C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C017A004 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C017A238 (MonitorCreatePhysicalMonitor.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C017F2F0 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01820E0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0182E30 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C0284FA8 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02C3778 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02C4374 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02C6DCC (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C76C8 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7F50 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C832C (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8504 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02C87C8 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02C9320 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02C9648 (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C02C99D8 (MonitorNotifyDXGIGammaRampChange.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C02CA4EC (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C02CA774 (MonitorSetScaleFactorOverride.c)
 *     MonitorSetUsageClass @ 0x1C02CA8C8 (MonitorSetUsageClass.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02CE350 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(
        struct _FAST_MUTEX *this,
        __int64 a2,
        char a3,
        struct DXGMONITOR **a4)
{
  __int64 v4; // rsi
  ULONG *p_Contention; // rdx
  char *i; // rcx
  char *v10; // rax
  unsigned int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = (unsigned int)a2;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = 0LL;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(char **)&this[2].Contention; i != (char *)p_Contention; i = (char *)*((_QWORD *)v10 + 2) )
  {
    v10 = i - 16;
    if ( !i )
      v10 = 0LL;
    if ( !v10 )
      break;
    if ( *((_DWORD *)v10 + 11) == (_DWORD)v4 )
    {
      if ( a3 && *((_DWORD *)v10 + 108) != 1 )
        v10 = (char *)*((_QWORD *)v10 + 55);
      if ( v10 )
      {
        *a4 = (struct DXGMONITOR *)v10;
        v11 = 0;
        goto LABEL_18;
      }
      break;
    }
  }
  v13 = WdLogNewEntry5_WdTrace(i, p_Contention);
  v11 = -1073741275;
  *(_QWORD *)(v13 + 24) = v4;
  *(_QWORD *)(v13 + 32) = this;
LABEL_18:
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(i, p_Contention);
    WdLogEvent5_WdAssertion(v17);
  }
  KeReleaseGuardedMutex(this + 3);
  return v11;
}
