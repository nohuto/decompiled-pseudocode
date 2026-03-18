/*
 * XREFs of InitDwmInputProcessing @ 0x1C01117D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitDwmInputProcessing()
{
  unsigned int v0; // ebx

  v0 = -1073741801;
  gpkeDITTouchInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  ghDITEvent = (HANDLE)hCreateKernelEvent(1LL, 0LL);
  ghDITRITEvent = (HANDLE)hCreateKernelEvent(1LL, 0LL);
  gpkeDITMouseInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  gpkeDITCompositionInputSinkQueryResponseEvent = (PVOID)CreateKernelEvent(1LL, 0LL);
  gpkeComputeInputSinkInfo = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  gcDITMouseInjectionWaiters = 0;
  gpsemDITMouseInjectionWaiters = CreateKernelSemaphore(0LL, 0x7FFFFFFFLL);
  if ( gpkeDITTouchInjectionResponseEvent
    && ghDITEvent
    && ghDITRITEvent
    && gpkeDITMouseInjectionResponseEvent
    && gpkeDITCompositionInputSinkQueryResponseEvent
    && gpkeComputeInputSinkInfo
    && gpsemDITMouseInjectionWaiters )
  {
    return (unsigned int)CInputManager::CreateSessionGlobal();
  }
  return v0;
}
