/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C0094A30
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveInputOfType @ 0x1C00525A0 (RIMRemoveInputOfType.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

void __fastcall CHidInput::PreUninitialize(char **this)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  RIMRemoveInputOfType(this[1], 0x3Cu);
}
