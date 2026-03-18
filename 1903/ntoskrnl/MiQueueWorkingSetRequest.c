/*
 * XREFs of MiQueueWorkingSetRequest @ 0x14017F1F0
 * Callers:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14017F1C8 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x1402C83FC (MiEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1402C97D8 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  int v5; // eax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 7800);
  result = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v5 = *(_DWORD *)(v2 + 40);
    if ( !v5 )
    {
      KeResetEvent((PRKEVENT)v2);
      v5 = *(_DWORD *)(v2 + 40);
    }
    *(_DWORD *)(v2 + 40) = a2 | v5;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KeSetEvent((PRKEVENT)(v2 + 104), 0, 0);
    return KeWaitForSingleObject((PVOID)v2, WrVirtualMemory, 0, 0, 0LL);
  }
  return result;
}
