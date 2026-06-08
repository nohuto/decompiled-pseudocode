/*
 * XREFs of IsMonitorMWaitSupported @ 0x1C001FA10
 * Callers:
 *     InitMonitorMWaitSupport @ 0x1C001F950 (InitMonitorMWaitSupport.c)
 *     InitDriver @ 0x1C0039268 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004340 (GetCpuIdInfo.c)
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
