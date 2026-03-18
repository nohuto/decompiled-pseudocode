/*
 * XREFs of TtmpScheduledEvaluationDpc @ 0x140306930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall TtmpScheduledEvaluationDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedExchange((volatile __int32 *)DeferredContext + 62, 1) )
    ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 216), DelayedWorkQueue);
}
