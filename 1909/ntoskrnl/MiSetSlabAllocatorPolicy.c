/*
 * XREFs of MiSetSlabAllocatorPolicy @ 0x14019E34C
 * Callers:
 *     MiPartitionActive @ 0x14008EF80 (MiPartitionActive.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetSlabAllocatorPolicy(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( dword_1405711E4 != 1 && (MiFlags & 0x8000) != 0 && (*(_QWORD *)(a1 + 7888) >= 0xED800uLL || dword_1405711E4 == 2) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140465E40, &LockHandle);
    *(_DWORD *)(a1 + 4) |= 8u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  return result;
}
