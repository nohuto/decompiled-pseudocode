/*
 * XREFs of __security_check_cookie @ 0x1C0002C10
 * Callers:
 *     KeyboardStart @ 0x1C00029E0 (KeyboardStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002C8C (__GSHandlerCheckCommon.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C550 (KeyboardClassFindMorePorts.c)
 *     KbdCreateClassObject @ 0x1C000CD40 (KbdCreateClassObject.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000E37C (KeyboardClassGetWaitWakeEnableState.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 *     KbdConfiguration @ 0x1C000F530 (KbdConfiguration.c)
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
