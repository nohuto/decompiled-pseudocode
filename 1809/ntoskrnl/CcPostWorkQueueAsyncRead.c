/*
 * XREFs of CcPostWorkQueueAsyncRead @ 0x1400E0158
 * Callers:
 *     CcAsyncCopyRead @ 0x1400DFF40 (CcAsyncCopyRead.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     CcCompleteAsyncRead @ 0x1400DF3B4 (CcCompleteAsyncRead.c)
 *     CcShouldSpinAsyncReadWorkerThread @ 0x1400E035C (CcShouldSpinAsyncReadWorkerThread.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187C98 (CcPerfLogWorkItemEnqueue.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char __fastcall CcPostWorkQueueAsyncRead(PSLIST_ENTRY ListEntry, __int64 a2)
{
  char v2; // r12
  _SLIST_ENTRY *Next; // rdi
  __int64 Next_high; // r15
  char v7; // bp
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // r10
  ULONG_PTR v11; // rbp
  __int64 *PoolWithTag; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+8h] BYREF

  BugCheckParameter2 = 0LL;
  v2 = 0;
  Next = ListEntry[8].Next;
  Next_high = HIDWORD(ListEntry[7].Next);
  if ( (xmmword_140542350 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, ListEntry, 0LL, 0LL);
  if ( *((_BYTE *)&ListEntry[7].Next + 8) != 5 )
  {
    if ( *(_QWORD *)(16 * Next_high + *((_QWORD *)&Next[50].Next + 1)) == 16 * Next_high
                                                                        + *((_QWORD *)&Next[50].Next + 1)
      && (LOBYTE(v9) = CcMaxNumberCompleteAsyncReadExWorkItems,
          *(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high) < (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems) )
    {
      v11 = (ULONG_PTR)&Next[52];
    }
    else
    {
      v11 = (ULONG_PTR)&Next[52];
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[52], 0LL);
      v14 = 16 * Next_high + *((_QWORD *)&Next[50].Next + 1);
      if ( *(_QWORD *)v14 != v14
        || *(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high) >= (unsigned int)CcMaxNumberCompleteAsyncReadExWorkItems )
      {
        v15 = *(_QWORD **)(v14 + 8);
        if ( *v15 != v14 )
LABEL_27:
          __fastfail(3u);
        ListEntry->Next = (_SLIST_ENTRY *)v14;
        v2 = 1;
        *((_QWORD *)&ListEntry->Next + 1) = v15;
        *v15 = ListEntry;
        *(_QWORD *)(v14 + 8) = ListEntry;
      }
      LOBYTE(v9) = ExReleasePushLockEx((ULONG_PTR)&Next[52], 0LL);
    }
    if ( v2 )
      return v9;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      **((_DWORD **)&ListEntry[4].Next + 1) = -1073741670;
      CcCompleteAsyncRead((__int64)ListEntry);
      LOBYTE(v9) = CcFreeWorkQueueEntry(ListEntry);
      return v9;
    }
    *((_DWORD *)PoolWithTag + 8) = 4;
    PoolWithTag[7] = (__int64)Next;
    PoolWithTag[6] = (__int64)ListEntry;
    *((_DWORD *)PoolWithTag + 9) = Next_high;
    *PoolWithTag = 0LL;
    PoolWithTag[2] = (__int64)CcCompleteAsyncReadWorker;
    PoolWithTag[3] = (__int64)PoolWithTag;
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    *((_DWORD *)v13 + 10) = (*(_DWORD *)(*((_QWORD *)&Next[49].Next + 1) + 4 * Next_high))++;
    if ( _InterlockedIncrement64((volatile signed __int64 *)&Next[56].Next + 1) <= 1 )
      __fastfail(0xEu);
    ExReleasePushLockEx(v11, 0LL);
    *v13 = 0LL;
    LOBYTE(v9) = ExQueueWorkItemToPartition(v13, 46, 0xFFFFFFFF, *((_QWORD *)&Next->Next + 1));
    v10 = (__int64 *)BugCheckParameter2;
    goto LABEL_9;
  }
  v7 = 0;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Next[52], 0LL);
  v8 = *(_QWORD **)(a2 + 8);
  if ( *v8 != a2 )
    goto LABEL_27;
  ListEntry->Next = (_SLIST_ENTRY *)a2;
  *((_QWORD *)&ListEntry->Next + 1) = v8;
  *v8 = ListEntry;
  *(_QWORD *)(a2 + 8) = ListEntry;
  if ( *(_QWORD *)(*((_QWORD *)&Next[50].Next + 1) + 16 * Next_high) == *((_QWORD *)&Next[50].Next + 1) + 16 * Next_high
    || *((_DWORD *)&Next[49].Next->Next + Next_high) <= 1u )
  {
    KeSetEvent((PRKEVENT)Next[51].Next + Next_high, 0, 0);
  }
  else
  {
    v7 = 1;
  }
  LOBYTE(v9) = ExReleasePushLockEx((ULONG_PTR)&Next[52], 0LL);
  if ( !v7 )
  {
    LOBYTE(v9) = CcShouldSpinAsyncReadWorkerThread(Next, &BugCheckParameter2, (unsigned int)Next_high);
    v10 = (__int64 *)BugCheckParameter2;
    if ( (_BYTE)v9 )
    {
      if ( !BugCheckParameter2 )
        return v9;
      v9 = *((_QWORD *)&Next[51].Next + 1);
      *(_DWORD *)(v9 + 4 * (101 * Next_high + *(unsigned int *)(BugCheckParameter2 + 40))) = 0;
    }
LABEL_9:
    if ( v10 )
    {
      *v10 = 0LL;
      LOBYTE(v9) = ExQueueWorkItemToPartition(v10, 0, 0xFFFFFFFF, *((_QWORD *)&Next->Next + 1));
    }
  }
  return v9;
}
