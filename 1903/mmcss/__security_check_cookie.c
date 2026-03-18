/*
 * XREFs of __security_check_cookie @ 0x1C0002EE0
 * Callers:
 *     CiSchedulerWait @ 0x1C0001160 (CiSchedulerWait.c)
 *     __GSHandlerCheckCommon @ 0x1C0002F7C (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003BC4 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003CBC (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D40 (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0003DB0 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0003E30 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003EA0 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0003F10 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0003F80 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C0004014 (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C00040A8 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C00041FC (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C0004298 (CiLogTurboEngaged.c)
 *     CiNdisThrottle @ 0x1C000A0A0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B1F0 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigReadDWORD @ 0x1C000D570 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D610 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000DB30 (CiConfigQueryValue.c)
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
