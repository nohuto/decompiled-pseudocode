/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x1402FB378
 * Callers:
 *     PpmUpdateIdleVeto @ 0x1402F0940 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x1402F41DC (PopFxPlatformStateAvailable.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ABEAC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402FB310 (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  KIRQL v2; // di
  char v3; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140467FC8);
  if ( a1 )
  {
    if ( ++dword_140467FC4 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_140467EB8, &qword_140467EC0);
    }
  }
  else if ( !--dword_140467FC4 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KxReleaseSpinLock(&qword_140467FC8);
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
