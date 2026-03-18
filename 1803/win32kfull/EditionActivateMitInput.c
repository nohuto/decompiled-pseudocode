/*
 * XREFs of EditionActivateMitInput @ 0x1C00BA840
 * Callers:
 *     <none>
 * Callees:
 *     DitTakeOver @ 0x1C00BA91C (DitTakeOver.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C00BAA28 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C00BAB30 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionActivateMitInput()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rdx

  v0 = 1;
  gbDITInHitTest = 1;
  IOCPDispatcher::RegisterThreadDispatcherObject(gpIOCPDispatcher, ghDITEvent);
  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(16LL, v1);
  WaitForRitToCompleteLastCommand();
  if ( gbDIT )
  {
    if ( (unsigned int)DitTakeOver() )
    {
      WakeRIT(128LL, v2);
      WaitForRitToCompleteLastCommand();
      _InterlockedAnd(&gdwDITWakeReason, 0xFFFFFFFE);
      _InterlockedExchange(&glDitMouseHandling, 1);
      gbNoMoreDITHitTest = 0;
      goto LABEL_5;
    }
    gbDIT = 0;
    WakeRIT(8LL, v2);
    WaitForRitToCompleteLastCommand();
  }
  v0 = 0;
LABEL_5:
  if ( gbDITInHitTest )
  {
    gbDITInHitTest = 0;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
  }
  return v0;
}
