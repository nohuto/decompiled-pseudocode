/*
 * XREFs of InitDwmInputProcessing @ 0x1C013F7D0
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
  WPP_MAIN_CB.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)CreateKernelEvent(1LL, 0LL);
  gcDITMouseInjectionWaiters = 0;
  gpsemDITMouseInjectionWaiters = CreateKernelSemaphore(0LL, 0x7FFFFFFFLL);
  if ( gpkeDITTouchInjectionResponseEvent
    && ghDITEvent
    && ghDITRITEvent
    && gpkeDITMouseInjectionResponseEvent
    && gpkeDITCompositionInputSinkQueryResponseEvent
    && *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1
    && gpsemDITMouseInjectionWaiters )
  {
    return (unsigned int)CInputManager::CreateSessionGlobal();
  }
  return v0;
}
