/*
 * XREFs of VmPrefetchVirtualAddresses @ 0x1408ECDC4
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400F3B7C (MmInSwapWorkingSet.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void __fastcall VmPrefetchVirtualAddresses(void *Src, void (__fastcall *a2)(void *))
{
  _KPROCESS *Process; // rsi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v6; // rbx
  struct _LIST_ENTRY *v7; // rcx

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[2].ActiveProcessors.Bitmap[19] )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * ((_QWORD)a2 + 4), 0x63506D56u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->List.Blink = 0LL;
      PoolWithTag[1].List.Flink = 0LL;
      PoolWithTag[1].List.Blink = 0LL;
      PoolWithTag[1].WorkerRoutine = 0LL;
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))VmpPrefetchWorker;
      PoolWithTag->Parameter = PoolWithTag;
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
