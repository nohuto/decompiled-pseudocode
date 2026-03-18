/*
 * XREFs of CmpTraceShutdownRundownComplete @ 0x140826630
 * Callers:
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceShutdownRundownComplete()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_RUNDOWN_COMPLETE;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
