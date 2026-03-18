/*
 * XREFs of InitRotationManager @ 0x1C0135770
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 InitRotationManager()
{
  _QWORD *PoolWithTag; // rax

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_BrokeredDisplays_RotMgr__private_propertyCache,
    8119317,
    (unsigned int)&unk_1C02CA1F0,
    0);
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
