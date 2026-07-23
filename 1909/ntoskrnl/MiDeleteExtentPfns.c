/*
 * XREFs of MiDeleteExtentPfns @ 0x1402CB520
 * Callers:
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402CC5E4 (MiPurgeBadFileOnlyPages.c)
 *     MiWaitForExtentDeletions @ 0x1402CD278 (MiWaitForExtentDeletions.c)
 *     MiWakeExtentDeletionWaiters @ 0x1402CD37C (MiWakeExtentDeletionWaiters.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 */

char __fastcall MiDeleteExtentPfns(__int64 a1, __int64 a2)
{
  PRTL_BALANCED_NODE v3; // rax
  __int64 v4; // rbx
  char result; // al
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1 )
  {
    v3 = KeAbPreAcquire((ULONG_PTR)&qword_140464410, 0LL, 0);
    if ( v3 )
      BYTE2(v3[1].Left) |= 1u;
  }
  while ( 1 )
  {
    MiPurgeBadFileOnlyPages(a1, a2);
    while ( qword_1404643E8 )
      MiRemovePhysicalMemory(0LL);
    KeAcquireInStackQueuedSpinLock(&qword_1404691A0, &LockHandle);
    v4 = qword_1404643E8;
    if ( !a1 )
    {
      if ( qword_1404643E8 || byte_140464431 == 1 )
        return MiWaitForExtentDeletions(&LockHandle);
      goto LABEL_12;
    }
    if ( !qword_1404643E8 )
      break;
LABEL_12:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
    if ( !v4 )
      goto LABEL_20;
  }
  result = MiWakeExtentDeletionWaiters(&LockHandle);
LABEL_20:
  if ( a1 )
    return KeAbPostRelease((ULONG_PTR)&qword_140464410);
  return result;
}
