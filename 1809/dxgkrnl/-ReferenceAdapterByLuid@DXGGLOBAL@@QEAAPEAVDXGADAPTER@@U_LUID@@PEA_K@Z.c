/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938
 * Callers:
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C0004F34 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00AF5D0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00B1BB0 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C00B39B0 (DxgkHandleForceProjectionMonitor.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B4100 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00B5980 (EnforceDriverModelScalingPolicy.c)
 *     IsMiniportDriverCCDSupport @ 0x1C00B5E8C (IsMiniportDriverCCDSupport.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00BB554 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00BBB2C (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00BC10C (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C2320 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00CE078 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C00CE304 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00CE3E0 (DxgkGetAdapterDefaultScaling.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D5954 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C00E59D0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C012D52C (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C012F428 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01309A0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkCacheHybridQueryValue @ 0x1C0130CE0 (DxgkCacheHybridQueryValue.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C0138914 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C0139690 (DxgkIsSourceInHardwareClone.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C013AD10 (DxgkQueryModeListCacheLuid.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01BDDA0 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C01C5790 (DxgkSetMonitorColorSpaceTransform.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D24C0 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkIsMonitorConnected @ 0x1C01D50C0 (DxgkIsMonitorConnected.c)
 *     DxgkQueryStatisticsInternal @ 0x1C01D6738 (DxgkQueryStatisticsInternal.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C02230D0 (DxgkWin32kSetPointerPosition.c)
 *     DxgkWin32kSetPointerShape @ 0x1C0223230 (DxgkWin32kSetPointerShape.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0231A60 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0239510 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02398A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0239B74 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C023B43C (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C023B6DC (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02881E8 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0289460 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C028BBB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C028CD08 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C028D960 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  char *v6; // r9
  char *v7; // rdx
  char *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v6 = (char *)this + 448;
  v7 = (char *)*((_QWORD *)this + 56);
  while ( 1 )
  {
    v8 = 0LL;
    if ( v7 != v6 )
      v8 = v7;
    if ( !v8 )
      break;
    v7 = *(char **)v7;
    if ( *((_DWORD *)v8 + 69) == LowPart && *((_DWORD *)v8 + 70) == HighPart )
    {
      _m_prefetchw(v8 + 24);
      v9 = *((_QWORD *)v8 + 3);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v9 + 1, v9);
        if ( v10 == v9 )
        {
          *a3 = -1LL;
          goto LABEL_11;
        }
      }
    }
  }
LABEL_11:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return (struct DXGADAPTER *)v8;
}
