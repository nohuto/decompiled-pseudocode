/*
 * XREFs of IsMonitorMWaitSupported @ 0x1C00237A4
 * Callers:
 *     InitMonitorMWaitSupport @ 0x1C00236F0 (InitMonitorMWaitSupport.c)
 *     InitDriver @ 0x1C0036E5C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004C40 (GetCpuIdInfo.c)
 */

bool IsMonitorMWaitSupported()
{
  int v1; // [rsp+20h] [rbp-38h] BYREF
  char v2; // [rsp+28h] [rbp-30h]
  unsigned int v3[4]; // [rsp+30h] [rbp-28h] BYREF

  GetCpuIdInfo(1u, &v1);
  if ( (v2 & 8) == 0 )
    return 0;
  GetCpuIdInfo(0, v3);
  return v3[0] >= 5;
}
