/*
 * XREFs of CcWaitForCurrentLazyWriterActivityInternal @ 0x140160D5C
 * Callers:
 *     CcWaitForCurrentLazyWriterActivityHelper @ 0x140160D30 (CcWaitForCurrentLazyWriterActivityHelper.c)
 *     CcExitPartition @ 0x14026B7A0 (CcExitPartition.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     CcAllocateWorkQueueEntry @ 0x1400D63AC (CcAllocateWorkQueueEntry.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187C98 (CcPerfLogWorkItemEnqueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  int v9; // [rsp+34h] [rbp-2Ch]
  _QWORD v10[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  PSLIST_ENTRY v12; // [rsp+78h] [rbp+18h] BYREF

  result = CcAllocateWorkQueueEntry(a1, &v12);
  if ( result >= 0 )
  {
    v3 = v12;
    *((_BYTE *)&v12[7].Next + 8) = 4;
    Object = 0;
    v9 = 0;
    v10[1] = v10;
    v10[0] = v10;
    v8 = 6;
    v3[1].Next = (_SLIST_ENTRY *)&Object;
    if ( (xmmword_140542350 & 0x20000) != 0 )
      CcPerfLogWorkItemEnqueue(a1 + 272, v3, 0LL, 0LL);
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
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
