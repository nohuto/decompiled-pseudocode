/*
 * XREFs of DpiGetDxgAdapter @ 0x1C0010BE0
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0031780 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgNotifyVSyncCB @ 0x1C0037E30 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C0037EB0 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C0037F40 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C0037F70 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C0037FF0 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C0038070 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C00380F0 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C00383D0 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C0038450 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C00385D0 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x1C0038640 (DxgkInvalidateHwContextCB.c)
 *     DxgkMapFrameBufferPointerCB @ 0x1C0038740 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0038830 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1C00388A0 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C00388D0 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C00389F0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C0038A70 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C0038AF0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C0038B70 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C0038C00 (DxgkUnpinFrameBufferForSaveCB.c)
 *     DxgkCbReportDiagnostic @ 0x1C0041F60 (DxgkCbReportDiagnostic.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C00F23D0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C00F36F0 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C00F3850 (DxgDestroyContextAllocationCB.c)
 *     DxgMiniportQueryMonitorInterfaceCB @ 0x1C012D3E0 (DxgMiniportQueryMonitorInterfaceCB.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C015B020 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C015DB80 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C01FB0F0 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C01FB170 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C01FB290 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C01FB330 (DxgkUpdateContextAllocationCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C0292520 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02931D0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C0293420 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C0294330 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapter(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rax

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 && *(_DWORD *)(v2 + 16) == 1953656900 && *(_DWORD *)(v2 + 20) == 2 )
      return *(_QWORD *)(v2 + 3792);
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = a1;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(0LL);
  }
  WdLogEvent5_WdError(v4);
  return 0LL;
}
