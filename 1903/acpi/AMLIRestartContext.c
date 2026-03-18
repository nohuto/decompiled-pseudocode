/*
 * XREFs of AMLIRestartContext @ 0x1C00631C0
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C004C3D0 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C004C410 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C004FA30 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C005AEF0 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C005F760 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C0062FA4 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C0064E50 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C001EAF0 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext((PSLIST_ENTRY)a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
