/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730
 * Callers:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00CE1B0 (EnforceDriverModelScalingPolicy.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00D0FCC (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D1240 (DxgkGetAdapterDefaultScaling.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00D4018 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E7E10 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00ECB40 (DxgkGetMonitorInternalInfo.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0126A44 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0128DA8 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C01294A4 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C0129984 (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0130024 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0130CC0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C0133A38 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0142728 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01428D0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C0142B40 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C01446B0 (DxgkCacheHybridQueryValue.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0148120 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     IsMiniportDriverCCDSupport @ 0x1C014A50C (IsMiniportDriverCCDSupport.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C014C4AC (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C014CA40 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C014DDA0 (DxgkIsSourceInHardwareClone.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C014F200 (DxgkQueryModeListCacheLuid.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01ED9C0 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C74 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkIsMonitorConnected @ 0x1C02034F0 (DxgkIsMonitorConnected.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0204C38 (DxgkQueryStatisticsInternal.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C0257E70 (DxgkWin32kSetPointerPosition.c)
 *     DxgkWin32kSetPointerShape @ 0x1C0257FD0 (DxgkWin32kSetPointerShape.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C0266600 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026E4E8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026E68C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C026E97C (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FAC4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C02702C4 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C027057C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0270860 (DxgkHandleForceProjectionMonitor.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C0620 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C1890 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02C4374 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02C563C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02C6DCC (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  char *v7; // r8
  char *v8; // rdx
  _QWORD *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  DXGFASTMUTEX *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v17 = 0;
  v16 = (DXGGLOBAL *)((char *)this + 408);
  LowPart = a2.LowPart;
  if ( this == (DXGGLOBAL *)-408LL )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(-408LL, a2);
    *(_QWORD *)(v13 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v16 + 2) == CurrentThread )
  {
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(CurrentThread, a2);
    *(_QWORD *)(v14 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v17 )
  {
    v15 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdCriticalError)(CurrentThread, a2);
    v15[5] = &v16;
    v15[3] = 275LL;
    v15[4] = 4LL;
    v15[6] = 0LL;
    v15[7] = 0LL;
    WdLogEvent5_WdCriticalError(v15);
  }
  DXGFASTMUTEX::Acquire(v16);
  v7 = (char *)this + 448;
  v8 = (char *)*((_QWORD *)this + 56);
  v17 = 1;
  while ( 1 )
  {
    v9 = 0LL;
    if ( v8 != v7 )
      v9 = v8;
    if ( !v9 )
      break;
    v8 = *(char **)v8;
    if ( *(_QWORD *)((char *)v9 + 276) == __PAIR64__(HighPart, LowPart) )
    {
      _m_prefetchw(v9 + 3);
      v10 = v9[3];
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64(v9 + 3, v10 + 1, v10);
        if ( v11 == v10 )
        {
          *a3 = -1LL;
          goto LABEL_16;
        }
      }
    }
  }
LABEL_16:
  if ( v17 )
  {
    v17 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v16);
  }
  return (struct DXGADAPTER *)v9;
}
