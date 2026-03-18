/*
 * XREFs of VfIrpLogLockDatabase @ 0x140980AB4
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140965E18 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VfIrpLogLockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // di
  unsigned int v3; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( *(_DWORD *)(ViIrpLogDatabase + 24 * v1) )
  {
    v3 = -1073741267;
  }
  else
  {
    *(_DWORD *)(ViIrpLogDatabase + 24 * v1) = 1;
    v3 = 0;
  }
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v3;
}
