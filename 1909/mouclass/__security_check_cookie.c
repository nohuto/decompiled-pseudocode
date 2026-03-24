/*
 * XREFs of __security_check_cookie @ 0x1C0002900
 * Callers:
 *     MouseStart @ 0x1C00026D0 (MouseStart.c)
 *     __GSHandlerCheckCommon @ 0x1C000297C (__GSHandlerCheckCommon.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C00041D0 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C0004248 (MouClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     MouseClassFindMorePorts @ 0x1C000C420 (MouseClassFindMorePorts.c)
 *     MouCreateClassObject @ 0x1C000CBD0 (MouCreateClassObject.c)
 *     TraceLoggingRegisterEx @ 0x1C000D140 (TraceLoggingRegisterEx.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000E10C (MouseClassGetWaitWakeEnableState.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 *     DriverEntry @ 0x1C000F470 (DriverEntry.c)
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
