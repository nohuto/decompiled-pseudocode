/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C004C548
 * Callers:
 *     ACPIBuildDeviceRequest @ 0x1C0010064 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0010BC0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C0015F30 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0021658 (ACPIBuildRunMethodRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C0026AE4 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C300 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIDispatchAddDevice @ 0x1C002CF60 (ACPIDispatchAddDevice.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F698 (ACPIBuildThermalZoneRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C0061078 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0061350 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061A50 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     FreeContext @ 0x1C0067BB4 (FreeContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
