/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0005FE8
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AF0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0001C98 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0001D00 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001E70 (StorPortResumeDevice.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C00033D0 (StorPortSetDeviceQueueDepth.c)
 *     StorPortNotification @ 0x1C00052A0 (StorPortNotification.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0014834 (RaidBusEnumeratorGetUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C001F3E4 (StorPortpInvokeAcpiMethod.c)
 *     StorpTelemetryMiniportEvent @ 0x1C001FFE8 (StorpTelemetryMiniportEvent.c)
 *     StorPortGetLogicalUnit @ 0x1C0023270 (StorPortGetLogicalUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C00348E4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C00349B8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0037530 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C0037820 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C003BD64 (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C003C3D0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C003C590 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003C720 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C003ECC8 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C003EE08 (StorpMarkDeviceFailed.c)
 *     StorpSetUnitAttributes @ 0x1C003F478 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003F4F4 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C00440F0 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0048DD4 (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C0073E68 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B84 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0005C18 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005D18 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C000605C (RaidAdapterFindUnitAtPassive.c)
 */

__int64 __fastcall RaidAdapterFindUnit(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 UnitAtDirql; // rbx
  KIRQL v8; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return RaidAdapterFindUnitAtPassive();
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 672) )
  {
    v8 = RaidAdapterAcquireInterruptLock(a1);
    UnitAtDirql = RaidAdapterFindUnitAtDirql(a1, a2);
    RaidAdapterReleaseInterruptLock(a1, v8);
    return UnitAtDirql;
  }
  return RaidAdapterFindUnitAtDirql(a1, a2);
}
