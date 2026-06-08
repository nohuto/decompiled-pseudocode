/*
 * XREFs of IsHwpIdleOptimizationSupported @ 0x1C0006A98
 * Callers:
 *     GetHwpPerfControlHandler @ 0x1C0006670 (GetHwpPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004340 (GetCpuIdInfo.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00073BC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

char IsHwpIdleOptimizationSupported()
{
  char v0; // bl
  __int64 v1; // rdx
  __int64 v2; // r8
  _QWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF

  v4[0] = 0LL;
  v4[1] = 0LL;
  v0 = 0;
  v5[0] = 0LL;
  v5[1] = 0LL;
  GetCpuIdInfo(0, v4);
  if ( LODWORD(v4[0]) >= 6 )
  {
    GetCpuIdInfo(6u, v5);
    if ( (v5[0] & 0x100080) == 0x100080 )
    {
      v0 = 1;
      wil_details_FeaturePropertyCache_ReportUsageToService(1048704LL, v1, v2, 1LL);
    }
  }
  return v0;
}
