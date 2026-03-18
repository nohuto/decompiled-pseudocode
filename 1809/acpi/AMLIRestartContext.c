/*
 * XREFs of AMLIRestartContext @ 0x1C0061240
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x1C004AC70 (ACPIFlushDeviceQueueCallback.c)
 *     ACPIFlushPowerQueueCallback @ 0x1C004ACB0 (ACPIFlushPowerQueueCallback.c)
 *     GenericDeviceFirmwareLockCompletion @ 0x1C004E140 (GenericDeviceFirmwareLockCompletion.c)
 *     AcpiNativeMethodEvalRequestCompletion @ 0x1C0059240 (AcpiNativeMethodEvalRequestCompletion.c)
 *     ACPITableUnloadCallBack @ 0x1C005D930 (ACPITableUnloadCallBack.c)
 *     AMLIFinalizeObject @ 0x1C0061018 (AMLIFinalizeObject.c)
 *     FreeObjOwnerWorker @ 0x1C0062EA0 (FreeObjOwnerWorker.c)
 * Callees:
 *     RestartContext @ 0x1C00237D0 (RestartContext.c)
 */

__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  return RestartContext(a1, (*(_DWORD *)(a1 + 64) & 0x100) == 0);
}
