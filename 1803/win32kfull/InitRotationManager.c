/*
 * XREFs of InitRotationManager @ 0x1C01124F0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C005F920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 InitRotationManager()
{
  _QWORD *PoolWithTag; // rax
  int v2; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_BrokeredDisplays_RotMgr__private_propertyCache,
    8119317LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02D9A70,
    0,
    v2);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6D747255u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    *PoolWithTag = &CLegacyRotationMgr::`vftable';
  }
  P = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000017 : 0;
}
