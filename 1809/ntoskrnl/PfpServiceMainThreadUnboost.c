/*
 * XREFs of PfpServiceMainThreadUnboost @ 0x140143330
 * Callers:
 *     PfPowerActionNotify @ 0x140567F10 (PfPowerActionNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C1040 (ObDereferenceObjectDeferDelete.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCF20 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PfpServiceMainThreadUnboost(_DWORD *P)
{
  PVOID v2; // rbx
  KIRQL v3; // si
  __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14043C108);
  if ( !P || dword_14043C110 == P[41] )
  {
    v2 = Object;
    if ( Object )
    {
      Object = 0LL;
      KeSetActualBasePriorityThread((__int64)v2, (unsigned int)dword_14043C100, v4);
    }
  }
  KxReleaseSpinLock(&qword_14043C108);
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
