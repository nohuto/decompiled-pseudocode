/*
 * XREFs of ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x18001CEA0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001D270 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z @ 0x18002E0BC (-ForceRealization@CCachedVisualImage@@AEAAJPEBUBitmapSourceInfo@@@Z.c)
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x18002E284 (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z.c)
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x18003DC6C (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x180042368 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800424C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180093420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800A4574 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800A4C00 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 *     ?SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x18015A698 (-SendRemotingMetaData@CDisplayManager@@QEAAJAEBU_DWMIndirectMetaData@@@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180177654 (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801AA328 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801ABB88 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18025D034 (-IsDirectFlipSupportedOnTarget@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@.c)
 * Callees:
 *     ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x1800A376C (--_GCDisplaySet@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CDisplaySet::Release(CDisplaySet *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
    CDisplaySet::`scalar deleting destructor'(this, a2);
  return v2;
}
