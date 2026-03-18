/*
 * XREFs of CcWaitForCurrentLazyWriterActivityInternal @ 0x14017181C
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityHelper @ 0x1401717F0 (CcWaitForCurrentLazyWriterActivityHelper.c)
 *     CcExitPartition @ 0x14027EDAC (CcExitPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x14007E504 (CcAllocateWorkQueueEntry.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401593D4 (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall CcWaitForCurrentLazyWriterActivityInternal(__int64 a1)
{
  int result; // eax
  PSLIST_ENTRY v3; // rdi
  PSLIST_ENTRY *v4; // rcx
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int16 Object; // [rsp+30h] [rbp-30h] BYREF
  char v8; // [rsp+32h] [rbp-2Eh]
  char v9; // [rsp+33h] [rbp-2Dh]
  int v10; // [rsp+34h] [rbp-2Ch]
  _QWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  PSLIST_ENTRY v13; // [rsp+78h] [rbp+18h] BYREF

  v9 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = CcAllocateWorkQueueEntry(a1, &v13);
  if ( result >= 0 )
  {
    v3 = v13;
    *((_BYTE *)&v13[7].Next + 8) = 4;
    Object = 0;
    v10 = 0;
    v11[1] = v11;
    v11[0] = v11;
    v8 = 6;
    v3[1].Next = (_SLIST_ENTRY *)&Object;
    if ( (xmmword_140572410 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(a1 + 272, (__int64)v3, 0, 0);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    v4 = *(PSLIST_ENTRY **)(a1 + 280);
    if ( *v4 != (PSLIST_ENTRY)(a1 + 272) )
      __fastfail(3u);
    v3->Next = (_SLIST_ENTRY *)(a1 + 272);
    *((_QWORD *)&v3->Next + 1) = v4;
    *v4 = v3;
    *(_QWORD *)(a1 + 280) = v3;
    *(_BYTE *)(a1 + 593) = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 316));
    CcScheduleLazyWriteScan(a1, 1, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 316));
  }
  return result;
}
