/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1406E4574
 * Callers:
 *     ExpWnfNotifySubscription @ 0x14063EFD4 (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140641174 (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406E4624 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfStartKernelDispatcher(int a1)
{
  if ( a1 )
  {
    ExpWnfDispatchKernelSubscription();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(ExpWnfDispatcher + 40), 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpWnfDispatcher + 8), DelayedWorkQueue);
  }
}
