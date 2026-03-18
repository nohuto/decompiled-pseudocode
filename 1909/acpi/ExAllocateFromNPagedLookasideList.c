/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C0010D04
 * Callers:
 *     ACPIBuildDeviceRequest @ 0x1C0010064 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C00104F4 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0010BC0 (ACPIBuildSpecialSynchronizationRequest.c)
 *     NewContext @ 0x1C0020EEC (NewContext.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0021658 (ACPIBuildRunMethodRequest.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0027D54 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0027DF4 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C300 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIDispatchAddDevice @ 0x1C002CF60 (ACPIDispatchAddDevice.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002D7B0 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C002E900 (DispatchNotification.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F19C (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F698 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0030144 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0060D44 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0061528 (ACPIWakeDisableAsync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
