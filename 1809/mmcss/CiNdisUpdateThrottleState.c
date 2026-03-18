/*
 * XREFs of CiNdisUpdateThrottleState @ 0x1C000B800
 * Callers:
 *     CiThreadDecrementScheduledCount @ 0x1C000A950 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000B0F0 (CiThreadIncrementScheduledCount.c)
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
