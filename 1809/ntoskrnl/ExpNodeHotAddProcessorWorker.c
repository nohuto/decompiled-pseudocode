/*
 * XREFs of ExpNodeHotAddProcessorWorker @ 0x1408D6230
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 *     PsGetNextPartition @ 0x14011FFC8 (PsGetNextPartition.c)
 *     PsQuitNextPartition @ 0x1402EBCAC (PsQuitNextPartition.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1406B4DE0 (KeSynchronizeWithDynamicProcessors.c)
 *     ExpWorkQueueManagerStart @ 0x1407548C0 (ExpWorkQueueManagerStart.c)
 */

void __fastcall ExpNodeHotAddProcessorWorker(__int64 a1)
{
  void *v2; // rcx
  int v3; // eax
  void *NextPartition; // rax
  int v5; // r8d
  void *v6; // rbx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  KeSynchronizeWithDynamicProcessors();
  v2 = 0LL;
  while ( 1 )
  {
    NextPartition = PsGetNextPartition(v2);
    v6 = NextPartition;
    if ( !NextPartition )
      break;
    v3 = ExpWorkQueueManagerStart(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextPartition + 2) + 16LL) + 8LL * *(unsigned __int16 *)(a1 + 146)),
           *(unsigned __int16 *)(a1 + 146),
           v5);
    v2 = v6;
    if ( v3 < 0 )
    {
      PsQuitNextPartition(v6);
      Interval.QuadPart = -500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      *(_QWORD *)(a1 + 384) = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 384), DelayedWorkQueue);
      return;
    }
  }
}
