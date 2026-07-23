/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1406B8BA4
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x1406B8AA8 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B8C54 (ExpWnfDispatchKernelSubscription.c)
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
