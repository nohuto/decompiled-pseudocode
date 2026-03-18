/*
 * XREFs of SepInformFileSystemsOfDeletedLogon @ 0x1405B5764
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406D73DC (SepDeReferenceLogonSession.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepInformFileSystemsOfDeletedLogon(struct _LIST_ENTRY **a1, struct _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x53466553u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1].List.Flink = *a1;
    PoolWithTag[1].List.Blink = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x53466553u);
    v5->List.Flink = 0LL;
    v5->WorkerRoutine = (void (__fastcall *)(void *))SepNotifyFileSystems;
    v5->Parameter = v5;
    ExQueueWorkItem(v5, DelayedWorkQueue);
  }
}
