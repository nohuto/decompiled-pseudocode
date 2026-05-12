/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C00079F0
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00023B0 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaUnitStartIo @ 0x1C00035A0 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000615C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C00074B8 (RaidUnitReleaseIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RaUnitPowerIrp @ 0x1C0010428 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00105C4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0011FF0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C00122B0 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0016284 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C001F238 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021B10 (RaUnitDeleteDeviceIrp.c)
 *     RaidCancelIrp @ 0x1C00443A4 (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00457F8 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C004585C (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0047C70 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0048350 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0048C00 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0048F50 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006D74C (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C006F784 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C0075310 (RaUnitStorageDumpControl.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(__int64 a1)
{
  unsigned __int64 v1; // r9
  LONG result; // eax
  LONG v3; // ett

  v1 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  result = *(_DWORD *)(v1 + *(_QWORD *)(a1 + 32));
  while ( (result & 1) == 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + *(_QWORD *)(a1 + 32)), result - 2, result);
    if ( v3 == result )
      return result;
  }
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 936), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
  return result;
}
