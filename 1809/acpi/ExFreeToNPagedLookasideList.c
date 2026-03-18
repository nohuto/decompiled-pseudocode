/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1C004ADD8
 * Callers:
 *     ACPIBuildDeviceRequest @ 0x1C001B010 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C078 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001E634 (ACPIDeviceCompleteRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F460 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildRunMethodRequest @ 0x1C002523C (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BE18 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002EB1C (ACPIBuildThermalZoneRequest.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C005F180 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C005F440 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     FreeContext @ 0x1C0065B50 (FreeContext.c)
 *     ACPIDispatchAddDevice @ 0x1C00BA890 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
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
