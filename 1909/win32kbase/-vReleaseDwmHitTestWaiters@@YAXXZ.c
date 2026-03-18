/*
 * XREFs of ?vReleaseDwmHitTestWaiters@@YAXXZ @ 0x1C010465C
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023A70 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

void vReleaseDwmHitTestWaiters(void)
{
  if ( !gbNoMoreDITHitTest )
  {
    gbDITInHitTest = 0;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
    gbNoMoreDITHitTest = 1;
  }
}
