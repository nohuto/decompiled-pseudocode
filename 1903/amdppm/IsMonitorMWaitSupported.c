/*
 * XREFs of IsMonitorMWaitSupported @ 0x1C001C584
 * Callers:
 *     InitMonitorMWaitSupport @ 0x1C001C4C0 (InitMonitorMWaitSupport.c)
 *     InitDriver @ 0x1C0035008 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000DF80 (GetCpuIdInfo.c)
 */

bool IsMonitorMWaitSupported()
{
  __int64 v1; // [rsp+20h] [rbp-38h] BYREF
  __int64 v2; // [rsp+28h] [rbp-30h]
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  v3[0] = 0LL;
  v3[1] = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  GetCpuIdInfo(1u, &v1);
  if ( (v2 & 8) == 0 )
    return 0;
  GetCpuIdInfo(0, v3);
  return LODWORD(v3[0]) >= 5;
}
