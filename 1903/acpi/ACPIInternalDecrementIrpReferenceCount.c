/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C000A814
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0007E58 (ACPIThermalGetSensorDevice.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C000A340 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIThermalActivateConstraint @ 0x1C000A480 (ACPIThermalActivateConstraint.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C000A610 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C0030ED0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0031050 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C0050290 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C00503E0 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C0052940 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C00554C0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C0093210 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 680), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 704), 0, 0);
  return result;
}
