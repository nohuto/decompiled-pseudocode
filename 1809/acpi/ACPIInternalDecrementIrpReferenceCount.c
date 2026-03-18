/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C000E374
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C000CD00 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C000DE20 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIThermalActivateConstraint @ 0x1C000DFF0 (ACPIThermalActivateConstraint.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C000E180 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001174C (ACPIThermalGetSensorDevice.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C0030290 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C004EA40 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C004EB80 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C0050FC0 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0053A60 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C008F730 (ACPIIrpCompletionRoutineWorker.c)
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
