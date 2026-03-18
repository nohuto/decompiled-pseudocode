/*
 * XREFs of PopUpdateAcDcState @ 0x14017648C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopCurrentPowerState @ 0x14067E620 (PopCurrentPowerState.c)
 *     PopDiagTraceAcDcStateChange @ 0x1408AD350 (PopDiagTraceAcDcStateChange.c)
 */

char __fastcall PopUpdateAcDcState(unsigned int a1)
{
  char v2; // bl
  KIRQL v4; // al
  KIRQL v5; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD v7[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v7, 0, 0x20uLL);
  if ( dword_140443ACC == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  dword_140443ACC = a1;
  v5 = v4;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  v2 = 1;
  PopCurrentPowerState(v7);
  PopDiagTraceAcDcStateChange(a1, v7[3], v7[2]);
  return v2;
}
