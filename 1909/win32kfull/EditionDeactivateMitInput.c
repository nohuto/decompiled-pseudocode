/*
 * XREFs of EditionDeactivateMitInput @ 0x1C0161920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C00ECCA0 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C00ECEA0 (WakeRIT.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C0161A64 (MasterInputThreadPrepareForRitTakeover.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 EditionDeactivateMitInput()
{
  __int64 result; // rax
  int v1; // edx
  int v2; // ecx
  unsigned int v3; // ebx
  __int64 v4; // rcx

  result = EtwTraceDitShutdown();
  if ( gbDIT )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_(v2, v1, 16, 10, (__int64)&WPP_9057b90ff75035cf7d9b6e99c641c047_Traceguids);
    }
    gbDITInHitTest = 1;
    _InterlockedExchange(&glDitMouseHandling, 0);
    v3 = gdwDITWakeReason & 1 | 8;
    MasterInputThreadPrepareForRitTakeover();
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
    WakeRIT(v3);
    WaitForRitToCompleteLastCommand(v4);
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
