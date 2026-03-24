/*
 * XREFs of CmpTraceShutdownStart @ 0x1407EC490
 * Callers:
 *     CmShutdownSystem @ 0x1407EC8B4 (CmShutdownSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAD20 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

BOOLEAN CmpTraceShutdownStart()
{
  REGHANDLE v0; // rbx
  BOOLEAN result; // al
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-28h] BYREF

  v0 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_START;
  result = EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor);
  if ( result )
    return EtwWrite(v0, &EventDescriptor, 0LL, 0, 0LL);
  return result;
}
