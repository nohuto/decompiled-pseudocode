/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C0009580
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0002BC0 (StorpLogPerUnitStatistics.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007ACC (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0008FE4 (RaUnitDeviceControlIrp.c)
 *     RaUnitPowerIrp @ 0x1C00123F0 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C001258C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C00126F0 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012980 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015664 (RaidUnitProcessBusyRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C001652C (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0020EF8 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C00486F4 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0049630 (RaidUnitAbortSrb.c)
 *     RaWmiDispatchIrp @ 0x1C006FC94 (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C00095E4 (RaUnitCheckRemoveState.c)
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
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
LABEL_4:
  LOBYTE(a3) = -(char)a3;
  v6 = RaUnitCheckRemoveState(a1, a2 & -(__int64)((_BYTE)a3 != 0), a3);
  if ( v6 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 912), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v7 + 464), 0, 0);
  return (unsigned int)v6;
}
