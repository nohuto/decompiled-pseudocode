/*
 * XREFs of InitRotationManager @ 0x1C00E0CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E413C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 InitRotationManager()
{
  _DWORD *PoolWithTag; // rax

  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_BrokeredDisplays_RotMgr__private_propertyCache,
    8119317LL,
    &unk_1C02DB558,
    0LL,
    3);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6D747255u);
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0;
    PoolWithTag[2] = 0;
    *(_QWORD *)PoolWithTag = &CLegacyRotationMgr::`vftable';
  }
  P = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000017 : 0;
}
