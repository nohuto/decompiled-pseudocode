/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C0009540
 * Callers:
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 *     RaidUnitReleaseIrp @ 0x1C0008DD4 (RaidUnitReleaseIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00108E0 (StorpDeviceHealthWorkItemRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C00123F0 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C001258C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00139D0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0013C30 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C001652C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020EF8 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C002537C (RaUnitDeleteDeviceIrp.c)
 *     RaidCancelIrp @ 0x1C0045D1C (RaidCancelIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0046F98 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0047024 (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0049120 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0049830 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004A230 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C004A570 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C006E2BC (RaUnitSurpriseRemovalIrp.c)
 *     RaWmiDispatchIrp @ 0x1C006FC94 (RaWmiDispatchIrp.c)
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
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 912), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 464), 0, 0);
  return result;
}
