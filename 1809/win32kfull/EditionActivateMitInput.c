/*
 * XREFs of EditionActivateMitInput @ 0x1C0108500
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitToCompleteLastCommand @ 0x1C0108860 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C0108A00 (WakeRIT.c)
 *     DitTakeOver @ 0x1C0108A60 (DitTakeOver.c)
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
  if ( !gbDIT )
    goto LABEL_8;
  if ( !(unsigned int)DitTakeOver() )
  {
    gbDIT = 0;
    WakeRIT(8LL, v2);
    WaitForRitToCompleteLastCommand();
LABEL_8:
    v0 = 0;
    goto LABEL_4;
  }
  WakeRIT(128LL, v2);
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
