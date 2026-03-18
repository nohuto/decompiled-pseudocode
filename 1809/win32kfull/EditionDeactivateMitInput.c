/*
 * XREFs of EditionDeactivateMitInput @ 0x1C01085C0
 * Callers:
 *     <none>
 * Callees:
 *     ResetPointerDevices @ 0x1C01087BC (ResetPointerDevices.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C0108860 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C0108A00 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeactivateMitInput()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int64 v2; // rdx

  result = EtwTraceDitShutdown();
  if ( gbDIT )
  {
    gbDITInHitTest = 1;
    _InterlockedExchange(&glDitMouseHandling, 0);
    v1 = gdwDITWakeReason & 1 | 8;
    ResetPointerDevices();
    gbPendRecreateTouchInjectionDevices = 1;
    CleanupSensorExplicitly(2LL);
    EtwTraceDitDisEngaged();
    gbDIT = 0;
    if ( gbTouchInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
    if ( gpDitTouchInjectionDeviceInfo )
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    if ( gbCompositionInputSinkQueryBlockedOnDIT )
      KeSetEvent((PRKEVENT)gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
    gdwInAtomicOperation = 0;
    gdwDeferWinEvent = 0;
    if ( gpIOCPDispatcher )
    {
      IOCPDispatcher::Close(gpIOCPDispatcher, 1);
      IOCPDispatcher_Destroy();
    }
    WakeRIT(v1, v2);
    WaitForRitToCompleteLastCommand();
    gbDITInHitTest = 0;
    result = gcDITHitTestWaiters;
    if ( gcDITHitTestWaiters )
    {
      KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      result = gcDITHitTestWaiters;
      gcDITHitTestWaiters = 0;
    }
  }
  return result;
}
