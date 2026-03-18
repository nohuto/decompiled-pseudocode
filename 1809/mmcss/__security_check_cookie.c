/*
 * XREFs of __security_check_cookie @ 0x1C0003240
 * Callers:
 *     CiSchedulerWait @ 0x1C00020D0 (CiSchedulerWait.c)
 *     QueryFeatureOverride @ 0x1C0003398 (QueryFeatureOverride.c)
 *     __GSHandlerCheckCommon @ 0x1C00035EC (__GSHandlerCheckCommon.c)
 *     CiLogSchedulerEvent @ 0x1C0003DD8 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003EC4 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003F48 (CiLogSchedulerWakeup.c)
 *     CiLogSetTaskIndexMode @ 0x1C0003FB8 (CiLogSetTaskIndexMode.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0004038 (CiLogTaskIndexCancelYield.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C00040A8 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0004118 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTaskIndexYield @ 0x1C0004188 (CiLogTaskIndexYield.c)
 *     CiLogThreadBuffering @ 0x1C000421C (CiLogThreadBuffering.c)
 *     CiLogThreadJoin @ 0x1C00042B0 (CiLogThreadJoin.c)
 *     CiLogThreadLeave @ 0x1C0004404 (CiLogThreadLeave.c)
 *     CiLogTurboEngaged @ 0x1C00044A0 (CiLogTurboEngaged.c)
 *     CiNdisThrottle @ 0x1C000A0A0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A380 (CiCreateTaskIndexClientFromThread.c)
 *     CiConfigReadDWORD @ 0x1C000D580 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D610 (CiConfigInitializeFromRegistry.c)
 *     CiConfigQueryValue @ 0x1C000DB00 (CiConfigQueryValue.c)
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
