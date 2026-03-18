/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00AADD8
 * Callers:
 *     VidMmDeInitGlobals @ 0x1C0024980 (VidMmDeInitGlobals.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     McGenEventUnregister @ 0x1C0025A10 (McGenEventUnregister.c)
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C0027334 (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00CE734 (TlgUnregisterAggregateProvider.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  if ( VIDMM_GLOBAL::PerfCounterSetEngineRegistered )
    PcwUnregister(GpuPerformanceCounterSetEngine);
  if ( VIDMM_GLOBAL::PerfCounterSetProcessMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetProcessMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetAdapterMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetLocalAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetLocalAdapterMemory);
  if ( VIDMM_GLOBAL::PerfCounterSetNonLocalAdapterMemoryRegistered )
    PcwUnregister(GpuPerformanceCounterSetNonLocalAdapterMemory);
  operator delete(VIDMM_PROCESS::_pDxProcessPerAdapterCount);
  if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'((VIDMM_PROCESS_FENCE_STORAGE *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  if ( VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock )
  {
    ExDeleteResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
  }
  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    operator delete(VIDMM_GLOBAL::_RotationHistory);
    VIDMM_GLOBAL::_RotationHistory = 0LL;
    qword_1C004E4B0 = 0LL;
  }
  TlgUnregisterAggregateProvider();
  McGenEventUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
}
