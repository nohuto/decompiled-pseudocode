/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x14017E4C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void MiAllocatePfnRepurposeLogDispatch()
{
  _SLIST_ENTRY *v0; // rsi
  _SLIST_ENTRY *PoolWithTag; // rax
  _SLIST_ENTRY *v2; // rdi
  PSLIST_ENTRY v3; // rbx
  _SLIST_ENTRY *Next; // rax
  unsigned int Alignment_low; // edi
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x70526D4Du);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Next = 0LL;
    PoolWithTag[2].Next = (_SLIST_ENTRY *)((char *)PoolWithTag + 72);
    *((_QWORD *)&PoolWithTag[2].Next + 1) = (char *)PoolWithTag + 4088;
    *((_DWORD *)&PoolWithTag->Next + 2) = 2;
    PoolWithTag[1].Next = v0;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140466380;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140466380);
  v3 = P;
  if ( !dword_140466368 )
    goto LABEL_20;
  if ( v2 )
  {
    P = v2;
    v2 = 0LL;
    goto LABEL_6;
  }
  if ( P )
  {
    if ( ((__int64)P[2].Next & 0xFFFLL) != 0 )
    {
      v3 = 0LL;
      goto LABEL_6;
    }
LABEL_20:
    P = 0LL;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
  {
    Next = v3[2].Next;
    if ( Next == (_SLIST_ENTRY *)(&v3[4].Next + 1) )
      goto LABEL_22;
    if ( ((unsigned __int16)Next & 0xFFF) != 0 )
    {
      if ( v0 < v3[1].Next )
      {
        v0 = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        Next = v3[2].Next;
      }
      *((_QWORD *)&v3[1].Next + 1) = v0;
      *((_QWORD *)&v3[2].Next + 1) = (char *)Next - 8;
    }
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 72);
    if ( !ExAcquireRundownProtection_0(&RunRef) )
      goto LABEL_22;
    Alignment_low = LOWORD(ListHead.Alignment);
    if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_1405039E8 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140467910, 0x64u);
      v6 = 0;
    }
    else
    {
      RtlpInterlockedPushEntrySList(&ListHead, v3);
      if ( !Event.Header.SignalState && Alignment_low >= 8 )
        KeSetEvent(&Event, 0, 0);
      v6 = 1;
    }
    ExReleaseRundownProtection_0(&RunRef);
    if ( !v6 )
LABEL_22:
      ExFreePoolWithTag(v3, 0);
  }
}
