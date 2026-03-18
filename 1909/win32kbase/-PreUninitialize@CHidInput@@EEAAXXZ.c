/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C005B550
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C0031CC8 (isInputVirtualizationEnabled.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004AB90 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     RIMRemoveInputOfType @ 0x1C0059BC0 (RIMRemoveInputOfType.c)
 *     ?ivUnregisterChildNotification@CBaseInput@@IEAAXXZ @ 0x1C018D2E8 (-ivUnregisterChildNotification@CBaseInput@@IEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(char **this)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D70B4,
    1,
    3);
  if ( isInputVirtualizationEnabled() && isRootPartition() )
    CBaseInput::ivUnregisterChildNotification((CBaseInput *)this);
  RIMRemoveInputOfType(this[1], 0x3Cu);
}
