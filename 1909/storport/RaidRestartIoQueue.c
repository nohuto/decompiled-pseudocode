/*
 * XREFs of RaidRestartIoQueue @ 0x1C000B150
 * Callers:
 *     RaidSetUnitPauseTimer @ 0x1C0001C4C (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0001C98 (RaidAdapterResumeUnit.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C0007224 (StorPortUnitActiveConditionStep2.c)
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00109C8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C00116D8 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x1C0012300 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidAdapterRestartQueues @ 0x1C0016154 (RaidAdapterRestartQueues.c)
 *     RaidUnitRestartQueue @ 0x1C002316C (RaidUnitRestartQueue.c)
 *     RaidAdapterDeviceReady @ 0x1C00349B8 (RaidAdapterDeviceReady.c)
 *     RaidCompletionDpcRoutine @ 0x1C0037820 (RaidCompletionDpcRoutine.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0047FD8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitRestartQueueDpcRoutine @ 0x1C00497A0 (RaidUnitRestartQueueDpcRoutine.c)
 * Callees:
 *     RaidNormalizeDeviceQueue @ 0x1C000B210 (RaidNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C000B558 (StorSubmitIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024DC0 (memset.c)
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
  v4 = RaidNormalizeDeviceQueue(a1 + 656);
  if ( v4 && !(unsigned __int8)StorSubmitIoGatewayItem(*(PKSPIN_LOCK *)(a1 + 664)) )
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(a1 + 648))(*(_QWORD *)(a1 + 640), v4 - 120, v5);
  if ( CurrentIrql != 2 )
    KeLowerIrql(v2);
}
