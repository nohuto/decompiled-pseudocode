/*
 * XREFs of RaidUnitQueueHierarchicalResetWorkItem @ 0x1C004A478
 * Callers:
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0047CB4 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C004A5E8 (RaidUnitRequestTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidUnitQueueHierarchicalResetWorkItem(__int64 a1)
{
  struct _IO_WORKITEM *WorkItem; // rdi
  unsigned int v4; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  if ( !WorkItem )
    return *(_QWORD *)(a1 + 1768) != 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1792), &LockHandle);
  if ( *(_QWORD *)(a1 + 1768) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoFreeWorkItem(WorkItem);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 912));
    v4 = *(_DWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 1768) = WorkItem;
    if ( v4 < 0x1E )
      v4 = 30;
    *(_DWORD *)(a1 + 1780) = 0;
    *(_DWORD *)(a1 + 1776) = 4 * v4 + 42;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)RaidHierarchicalResetWorkRoutine, CriticalWorkQueue, WorkItem);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4844LL);
  }
  return 1;
}
