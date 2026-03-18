/*
 * XREFs of EditionActivateMitInput @ 0x1C00ECB90
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitToCompleteLastCommand @ 0x1C00ECCA0 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C00ECEA0 (WakeRIT.c)
 *     DitTakeOver @ 0x1C00ECF00 (DitTakeOver.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionActivateMitInput()
{
  unsigned int v0; // ebx

  v0 = 1;
  gbDITInHitTest = 1;
  IOCPDispatcher::RegisterThreadDispatcherObject(gpIOCPDispatcher, ghDITEvent);
  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(16LL);
  WaitForRitToCompleteLastCommand();
  if ( !gbDIT )
    goto LABEL_8;
  if ( !(unsigned int)DitTakeOver() )
  {
    gbDIT = 0;
    WakeRIT(8LL);
    WaitForRitToCompleteLastCommand();
LABEL_8:
    v0 = 0;
    goto LABEL_4;
  }
  WakeRIT(128LL);
  WaitForRitToCompleteLastCommand();
  _InterlockedAnd(&gdwDITWakeReason, 0xFFFFFFFE);
  _InterlockedExchange(&glDitMouseHandling, 1);
  gbNoMoreDITHitTest = 0;
LABEL_4:
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
