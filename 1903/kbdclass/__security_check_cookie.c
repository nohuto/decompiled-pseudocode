/*
 * XREFs of __security_check_cookie @ 0x1C0002DA0
 * Callers:
 *     KeyboardStart @ 0x1C00027F0 (KeyboardStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002E1C (__GSHandlerCheckCommon.c)
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004970 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C00049E8 (KbdClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     KeyboardClassFindMorePorts @ 0x1C000D610 (KeyboardClassFindMorePorts.c)
 *     KbdCreateClassObject @ 0x1C000DFA0 (KbdCreateClassObject.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000F5CC (KeyboardClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
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
