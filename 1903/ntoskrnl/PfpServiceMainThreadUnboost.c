/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x14015E710
 * Callers:
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  KIRQL v3; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140467BC8);
  if ( !P || dword_140467BD0 == P[41] )
  {
    v2 = qword_140467BB8;
    if ( qword_140467BB8 )
    {
      qword_140467BB8 = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, (unsigned int)dword_140467BC0);
    }
  }
  KxReleaseSpinLock(&qword_140467BC8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  if ( v2 )
    ObDereferenceObjectDeferDelete(v2);
  if ( P )
    ExFreePoolWithTag(P, 0);
}
