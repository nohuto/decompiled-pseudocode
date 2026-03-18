/*
 * XREFs of KeAlertResumeThread @ 0x1402A45E4
 * Callers:
 *     NtAlertResumeThread @ 0x1408CA760 (NtAlertResumeThread.c)
 * Callees:
 *     KeAlertThread @ 0x1400E4F50 (KeAlertThread.c)
 *     KeResumeThread @ 0x1401258B8 (KeResumeThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeAlertResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned int v3; // edi
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KeAlertThread(a1, 0);
  v3 = KeResumeThread(a1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v3;
}
