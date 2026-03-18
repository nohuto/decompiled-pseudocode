/*
 * XREFs of DpiGetDxgAdapter @ 0x1C0014370
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0037130 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgNotifyVSyncCB @ 0x1C003E3F0 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C003E470 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C003E500 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C003E530 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C003E5B0 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C003E630 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C003E6B0 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C003E990 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C003EA10 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C003EB90 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x1C003EC00 (DxgkInvalidateHwContextCB.c)
 *     DxgkMapFrameBufferPointerCB @ 0x1C003ED00 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C003EDF0 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1C003EE60 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C003EE90 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C003EFB0 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C003F030 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C003F0B0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C003F130 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C003F1C0 (DxgkUnpinFrameBufferForSaveCB.c)
 *     DxgkCbReportDiagnostic @ 0x1C0048FD0 (DxgkCbReportDiagnostic.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C01374C0 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgMiniportQueryMonitorInterfaceCB @ 0x1C0141640 (DxgMiniportQueryMonitorInterfaceCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C0153570 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C0154890 (DxgDestroyContextAllocationCB.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C017F2F0 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01820E0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C022BA30 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C022BAB0 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C022BBD0 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C022BC70 (DxgkUpdateContextAllocationCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02CC260 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02CCCD0 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02CCF20 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02CDA80 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rax

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 2 )
      return *(_QWORD *)(v4 + 3896);
    v6 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v6 + 24) = a1;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
  }
  WdLogEvent5_WdError(v6);
  return 0LL;
}
