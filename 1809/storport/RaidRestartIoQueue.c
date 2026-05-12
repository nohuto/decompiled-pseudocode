/*
 * XREFs of RaidRestartIoQueue @ 0x1C000D2EC
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C00020FC (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0002148 (RaidAdapterResumeUnit.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C0007354 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012980 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterRestartQueues @ 0x1C0013C80 (RaidAdapterRestartQueues.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0015664 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0016500 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidUnitRestartQueue @ 0x1C001D700 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C0037A2C (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A730 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C004947C (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C004ADF0 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C000D3B4 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000D7A8 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1, char a2)
{
  KIRQL v4; // di
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rsi
  __int64 v7; // r9
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    v4 = KfRaiseIrql(2u);
  v6 = RaidNormalizeDeviceQueue(a1 + 656);
  if ( v6 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 664)) )
  {
    LOBYTE(v7) = a2;
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(a1 + 648))(*(_QWORD *)(a1 + 640), v6 - 120, v8, v7);
  }
  if ( CurrentIrql != 2 )
    KeLowerIrql(v4);
}
