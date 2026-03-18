/*
 * XREFs of MiPartitionActive @ 0x14008EF80
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiEnablePartitionMappedWrites @ 0x1406502AC (MiEnablePartitionMappedWrites.c)
 *     MiInsertPageFileInList @ 0x14077459C (MiInsertPageFileInList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSetSlabAllocatorPolicy @ 0x14019E34C (MiSetSlabAllocatorPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR *__fastcall MiPartitionActive(__int64 a1)
{
  unsigned __int8 OldIrql; // di
  ULONG_PTR *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140465E40, &LockHandle);
  *(_DWORD *)(a1 + 4) &= ~0x20u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = &MiSystemPartition;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    return (ULONG_PTR *)MiSetSlabAllocatorPolicy(a1);
  return result;
}
