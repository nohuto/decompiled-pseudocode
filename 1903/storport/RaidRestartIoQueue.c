/*
 * XREFs of RaidRestartIoQueue @ 0x1C000B100
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C0001C9C (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0001CE8 (RaidAdapterResumeUnit.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C00071D4 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C0007D30 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0010828 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0011538 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0012160 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidAdapterRestartQueues @ 0x1C001655C (RaidAdapterRestartQueues.c)
 *     RaidUnitRestartQueue @ 0x1C001B7A8 (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C00335C8 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C0036430 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0046BE8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C0048630 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C000B1C0 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000B508 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

void __fastcall RaidRestartIoQueue(__int64 a1)
{
  KIRQL v2; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  memset(v5, 0, 0x20uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    v2 = KfRaiseIrql(2u);
  v4 = RaidNormalizeDeviceQueue(a1 + 400);
  if ( v4 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 408)) )
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(a1 + 392))(*(_QWORD *)(a1 + 384), v4 - 120, v5);
  if ( CurrentIrql != 2 )
    KeLowerIrql(v2);
}
