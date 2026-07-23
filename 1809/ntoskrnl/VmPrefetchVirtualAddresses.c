/*
 * XREFs of VmPrefetchVirtualAddresses @ 0x1408B0FAC
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400E4F04 (MmInSwapWorkingSet.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void __fastcall VmPrefetchVirtualAddresses(void *Src, void (__fastcall *a2)(void *))
{
  _KPROCESS *Process; // rsi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v6; // rbx
  struct _LIST_ENTRY *v7; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[2].ActiveProcessors.Bitmap[15] )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * ((_QWORD)a2 + 4), 0x63506D56u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x38uLL);
      v6->List.Flink = 0LL;
      v6->WorkerRoutine = (void (__fastcall *)(void *))VmpPrefetchWorker;
      v6->Parameter = v6;
      ObfReferenceObject(Process);
      v6[1].WorkerRoutine = a2;
      v7 = (struct _LIST_ENTRY *)(((unsigned __int64)&v6[1].Parameter + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v6[1].List.Blink = v7;
      v6[1].List.Flink = (struct _LIST_ENTRY *)Process;
      memmove(v7, Src, 16LL * (_QWORD)a2);
      ExQueueWorkItem(v6, DelayedWorkQueue);
    }
  }
}
