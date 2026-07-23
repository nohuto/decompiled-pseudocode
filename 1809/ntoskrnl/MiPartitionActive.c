/*
 * XREFs of MiPartitionActive @ 0x14013DBF8
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x14061CE6C (MiEnablePartitionMappedWrites.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MiInsertPageFileInList @ 0x14074DB00 (MiInsertPageFileInList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiSetSlabAllocatorPolicy @ 0x14017EFEC (MiSetSlabAllocatorPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR *__fastcall MiPartitionActive(__int64 a1)
{
  unsigned __int8 OldIrql; // di
  ULONG_PTR *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043B7C0, &LockHandle);
  *(_DWORD *)(a1 + 4) &= ~0x10u;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
