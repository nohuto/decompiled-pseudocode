/*
 * XREFs of PopUpdateAcDcState @ 0x140174A58
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCurrentPowerState @ 0x14058DED4 (PopCurrentPowerState.c)
 *     PopDiagTraceAcDcStateChange @ 0x140870698 (PopDiagTraceAcDcStateChange.c)
 */

char __fastcall PopUpdateAcDcState(unsigned int a1)
{
  char v2; // bl
  KIRQL v4; // al
  KIRQL v5; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-20h]
  unsigned int v9; // [rsp+2Ch] [rbp-1Ch]

  if ( dword_14041810C == a1 )
    return 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  dword_14041810C = a1;
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
  PopDiagTraceAcDcStateChange(a1, v9, v8);
  return v2;
}
