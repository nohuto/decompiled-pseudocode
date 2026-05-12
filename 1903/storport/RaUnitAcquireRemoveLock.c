/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C00079E0
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000610C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 *     StorpLogPerUnitStatistics @ 0x1C000C660 (StorpLogPerUnitStatistics.c)
 *     RaUnitPowerIrp @ 0x1C0010288 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0010424 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0010588 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0010828 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0011538 (RaidUnitProcessBusyRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0015F54 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C001E3E8 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0046D58 (RaidUnitAbortSrb.c)
 *     RaWmiDispatchIrp @ 0x1C006E524 (RaWmiDispatchIrp.c)
 *     RaUnitStorageDumpControl @ 0x1C0074440 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C0007A44 (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v6; // ebx
  __int64 v7; // r10

  v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v4 = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 32));
  while ( (v4 & 1) == 0 )
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 32)), v4 + 2, v4);
    if ( v5 == v4 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
LABEL_4:
  LOBYTE(a3) = -(char)a3;
  v6 = RaUnitCheckRemoveState(a1, a2 & -(__int64)((_BYTE)a3 != 0), a3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 680), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v7 + 176), 0, 0);
  return (unsigned int)v6;
}
