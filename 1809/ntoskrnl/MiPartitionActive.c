/*
 * XREFs of MiPartitionActive @ 0x14013DAF8
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x14061BE6C (MiEnablePartitionMappedWrites.c)
 *     MmCreateProcessAddressSpace @ 0x1406D1898 (MmCreateProcessAddressSpace.c)
 *     MiInsertPageFileInList @ 0x14074C910 (MiInsertPageFileInList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     MiSetSlabAllocatorPolicy @ 0x14017EEAC (MiSetSlabAllocatorPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR *__fastcall MiPartitionActive(__int64 a1)
{
  unsigned __int8 OldIrql; // di
  ULONG_PTR *result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043A700, &LockHandle);
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
