/*
 * XREFs of ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C0094B00
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 __fastcall CHidInput::PostInitialize(CHidInput *this)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  return 0LL;
}
