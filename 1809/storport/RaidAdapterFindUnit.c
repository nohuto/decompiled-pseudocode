/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0007964
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001FA0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0002148 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C00021B0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0002330 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C0006460 (StorPortSetDeviceQueueDepth.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00191AC (RaidBusEnumeratorGetUnit.c)
 *     StorEtwMiniportEvent @ 0x1C001AA00 (StorEtwMiniportEvent.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C002148C (StorPortpInvokeAcpiMethod.c)
 *     StorpTelemetryMiniportEvent @ 0x1C0022D08 (StorpTelemetryMiniportEvent.c)
 *     StorPortGetLogicalUnit @ 0x1C0025F10 (StorPortGetLogicalUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C0037958 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0037A2C (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C003A4A0 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A730 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C003E8B0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C003EA70 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003EC10 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C0040F9C (StorpLogSystemEvent.c)
 *     StorpSetUnitAttributes @ 0x1C0041408 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0041480 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0045A70 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004A404 (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C006F078 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0006EF4 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C00079D8 (RaidAdapterFindUnitAtPassive.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 UnitAtDirql; // rbx
  KIRQL v8; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 696) )
  {
    v8 = RaidAdapterAcquireInterruptLock(a1);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    RaidAdapterReleaseInterruptLock(a1, v8);
    return UnitAtDirql;
  }
  return RaidAdapterFindUnitAtDirql(a1, a2);
}
