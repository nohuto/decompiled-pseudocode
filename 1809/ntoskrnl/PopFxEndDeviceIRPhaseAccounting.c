/*
 * XREFs of PopFxEndDeviceIRPhaseAccounting @ 0x1402D8234
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408704C8 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxAccumulateDeviceIRPhaseAccounting @ 0x1402D75C4 (PopFxAccumulateDeviceIRPhaseAccounting.c)
 */

__int64 __fastcall PopFxEndDeviceIRPhaseAccounting(__int64 a1)
{
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( qword_1404184E8 )
    PopFxAccumulateDeviceIRPhaseAccounting(a1);
  byte_1404184F0 = 0;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
