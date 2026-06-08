/*
 * XREFs of IsHwpFastMsrSupported @ 0x1C0006D78
 * Callers:
 *     GetHwpPerfControlHandler @ 0x1C0006A60 (GetHwpPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004C40 (GetCpuIdInfo.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00074C0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

char IsHwpFastMsrSupported()
{
  unsigned int v1[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v2[4]; // [rsp+40h] [rbp-28h] BYREF

  GetCpuIdInfo(0, v1);
  if ( v1[0] >= 6 )
  {
    GetCpuIdInfo(6u, v2);
    if ( (v2[0] & 0x40080) == 0x40080 )
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (unsigned int)&Feature_HwpAllowFastMsrOptimizations__private_propertyCache,
        16046513,
        (unsigned int)&Feature_HwpAllowFastMsrOptimizations_logged_traits,
        0);
  }
  return 0;
}
