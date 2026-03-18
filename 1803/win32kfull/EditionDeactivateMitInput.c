/*
 * XREFs of EditionDeactivateMitInput @ 0x1C00BAB90
 * Callers:
 *     <none>
 * Callees:
 *     WaitForRitToCompleteLastCommand @ 0x1C00BAA28 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C00BAB30 (WakeRIT.c)
 *     ResetPointerDevices @ 0x1C00BCABC (ResetPointerDevices.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeactivateMitInput()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

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
    WakeRIT(v1);
    WaitForRitToCompleteLastCommand(v3, v2, v4, v5);
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
