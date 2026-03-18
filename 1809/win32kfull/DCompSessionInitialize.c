/*
 * XREFs of DCompSessionInitialize @ 0x1C036ED30
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C015C07C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 DCompSessionInitialize()
{
  int v1; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DWMTouchTargeting__private_propertyCache,
    0x7F63A4u,
    (__int64)&unk_1C02CA3E4,
    1u,
    v1);
  g_bHitTestDwmFirstForTouch = 1;
  return DCompositionSessionInitialize(0LL);
}
