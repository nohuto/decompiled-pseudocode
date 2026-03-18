/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C006F050
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 *     isInputVirtualizationEnabled @ 0x1C0032A18 (isInputVirtualizationEnabled.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     RIMRemoveInputOfType @ 0x1C006D5B0 (RIMRemoveInputOfType.c)
 *     ?ivUnregisterChildNotification@CBaseInput@@IEAAXXZ @ 0x1C018F4D8 (-ivUnregisterChildNotification@CBaseInput@@IEAAXXZ.c)
 */

void __fastcall CHidInput::PreUninitialize(char **this)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C01D9B78,
    1,
    3);
  if ( isInputVirtualizationEnabled() && isRootPartition() )
    CBaseInput::ivUnregisterChildNotification((CBaseInput *)this);
  RIMRemoveInputOfType(this[1], 0x3Cu);
}
