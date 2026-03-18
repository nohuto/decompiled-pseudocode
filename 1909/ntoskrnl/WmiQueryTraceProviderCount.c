/*
 * XREFs of WmiQueryTraceProviderCount @ 0x140198728
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x1406E8880 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  int *v2; // r8
  KIRQL v3; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v2 = (int *)WmipInUseRegEntryHead;
  v3 = v1;
  while ( v2 != (int *)&WmipInUseRegEntryHead )
  {
    if ( ((v2[12] >> 4) & 0x400000) != 0 && (v2[12] & 0x40000000) != 0 && *((_QWORD *)v2 + 2) )
      ++v0;
    v2 = *(int **)v2;
  }
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v3);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v0;
}
