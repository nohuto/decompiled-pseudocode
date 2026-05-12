/*
 * XREFs of RaidAdapterFindUnit @ 0x1C0005F98
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001B40 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0001CE8 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0001D50 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0001EC0 (StorPortResumeDevice.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C00033E0 (StorPortSetDeviceQueueDepth.c)
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000610C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00147A4 (RaidBusEnumeratorGetUnit.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C001E594 (StorPortpInvokeAcpiMethod.c)
 *     StorpTelemetryMiniportEvent @ 0x1C001F608 (StorpTelemetryMiniportEvent.c)
 *     StorPortGetLogicalUnit @ 0x1C0023110 (StorPortGetLogicalUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C00334F4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C00335C8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0036138 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidCompletionDpcRoutine @ 0x1C0036430 (RaidCompletionDpcRoutine.c)
 *     StorEtwMiniportLogError @ 0x1C003A974 (StorEtwMiniportLogError.c)
 *     StorPortCompleteRequest @ 0x1C003AFE0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C003B1A0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C003B330 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C003D8D8 (StorpLogSystemEvent.c)
 *     StorpMarkDeviceFailed @ 0x1C003DA18 (StorpMarkDeviceFailed.c)
 *     StorpSetUnitAttributes @ 0x1C003E088 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003E104 (StorpUnitInitializePoFxPower.c)
 *     RaTranslateMiniportQueryBootLunsToHwQueryBootLuns @ 0x1C0042D00 (RaTranslateMiniportQueryBootLunsToHwQueryBootLuns.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0047C58 (RaidUnitProcessAsyncNotification.c)
 *     RaidAdapterPassThrough @ 0x1C0072F94 (RaidAdapterPassThrough.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B34 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0005BC8 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005CC8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterFindUnitAtPassive @ 0x1C000600C (RaidAdapterFindUnitAtPassive.c)
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
