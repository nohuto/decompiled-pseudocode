/*
 * XREFs of CiNdisUpdateThrottleState @ 0x1C000B1A0
 * Callers:
 *     CiThreadIncrementScheduledCount @ 0x1C000AA90 (CiThreadIncrementScheduledCount.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B760 (CiThreadDecrementScheduledCount.c)
 * Callees:
 *     <none>
 */

void CiNdisUpdateThrottleState()
{
  if ( CiNdisDeviceHandle )
  {
    if ( !CiNdisThrottleInProgress )
    {
      CiNdisThrottleInProgress = 1;
      IoQueueWorkItem(CiNdisThrottleWorkItem, (PIO_WORKITEM_ROUTINE)CiNdisThrottle, NormalWorkQueue, 0LL);
    }
  }
}
