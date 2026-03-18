/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1406D98B0
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x140654CC4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x1406D97B8 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D9954 (ExpWnfDispatchKernelSubscription.c)
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
