/*
 * XREFs of __security_check_cookie @ 0x1C0001670
 * Callers:
 *     __GSHandlerCheckCommon @ 0x1C00016EC (__GSHandlerCheckCommon.c)
 *     MouseStart @ 0x1C0004264 (MouseStart.c)
 *     MouCreateClassObject @ 0x1C000C410 (MouCreateClassObject.c)
 *     MouseClassFindMorePorts @ 0x1C000D530 (MouseClassFindMorePorts.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000D9E0 (MouseClassGetWaitWakeEnableState.c)
 *     TraceLoggingRegisterEx @ 0x1C000E06C (TraceLoggingRegisterEx.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 *     MouConfiguration @ 0x1C000FA00 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
