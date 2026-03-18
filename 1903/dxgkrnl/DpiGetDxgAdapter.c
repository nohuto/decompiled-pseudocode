/*
 * XREFs of DpiGetDxgAdapter @ 0x1C0013BA0
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1C0036FD0 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 *     DxgNotifyVSyncCB @ 0x1C003E290 (DxgNotifyVSyncCB.c)
 *     DxgPresentDisplayOnlyProgressCB @ 0x1C003E310 (DxgPresentDisplayOnlyProgressCB.c)
 *     DxgSetPowerComponentActiveNoWaitCB @ 0x1C003E3A0 (DxgSetPowerComponentActiveNoWaitCB.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C003E3D0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C003E450 (DxgSetPowerComponentIdleCB.c)
 *     DxgSetPowerComponentIdleCBInternal @ 0x1C003E4D0 (DxgSetPowerComponentIdleCBInternal.c)
 *     DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C003E550 (DxgSetPowerComponentIdleForceAsyncCBInternal.c)
 *     DxgkCompleteFStateTransitionCB @ 0x1C003E830 (DxgkCompleteFStateTransitionCB.c)
 *     DxgkCompletePStateTransitionCB @ 0x1C003E8B0 (DxgkCompletePStateTransitionCB.c)
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C003EA30 (DxgkHardwareContentProtectionTeardownCB.c)
 *     DxgkInvalidateHwContextCB @ 0x1C003EAA0 (DxgkInvalidateHwContextCB.c)
 *     DxgkMapFrameBufferPointerCB @ 0x1C003EBA0 (DxgkMapFrameBufferPointerCB.c)
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C003EC90 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     DxgkPinFrameBufferForSaveCB @ 0x1C003ED00 (DxgkPinFrameBufferForSaveCB.c)
 *     DxgkPowerRuntimeControlRequestCB @ 0x1C003ED30 (DxgkPowerRuntimeControlRequestCB.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C003EE50 (DxgkSetPowerComponentLatencyCB.c)
 *     DxgkSetPowerComponentResidencyCB @ 0x1C003EED0 (DxgkSetPowerComponentResidencyCB.c)
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x1C003EF50 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C003EFD0 (DxgkUnmapFrameBufferPointerCB.c)
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C003F060 (DxgkUnpinFrameBufferForSaveCB.c)
 *     DxgkCbReportDiagnostic @ 0x1C0048F20 (DxgkCbReportDiagnostic.c)
 *     DxgkReserveGpuVirtualAddressRangeCB @ 0x1C0133770 (DxgkReserveGpuVirtualAddressRangeCB.c)
 *     DxgMiniportQueryMonitorInterfaceCB @ 0x1C013D1F0 (DxgMiniportQueryMonitorInterfaceCB.c)
 *     DxgCreateContextAllocationCB @ 0x1C014F6B0 (DxgCreateContextAllocationCB.c)
 *     DxgDestroyContextAllocationCB @ 0x1C01509D0 (DxgDestroyContextAllocationCB.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C017B500 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C017E2F0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     DxgSetPowerComponentActiveCB @ 0x1C022B3C0 (DxgSetPowerComponentActiveCB.c)
 *     DxgSetPowerComponentActiveCBInternal @ 0x1C022B440 (DxgSetPowerComponentActiveCBInternal.c)
 *     DxgkMapContextAllocationCB @ 0x1C022B560 (DxgkMapContextAllocationCB.c)
 *     DxgkUpdateContextAllocationCB @ 0x1C022B600 (DxgkUpdateContextAllocationCB.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C02CC1A0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C02CCC10 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C02CCE60 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMODESET__@@@Z @ 0x1C02CD9C0 (-ReleaseMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXQEAUD3DKMDT_HMONITORSOURCEMO.c)
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
