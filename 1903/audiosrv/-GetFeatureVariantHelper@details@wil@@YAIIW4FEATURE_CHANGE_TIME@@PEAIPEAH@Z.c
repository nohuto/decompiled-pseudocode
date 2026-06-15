/*
 * XREFs of ?GetFeatureVariantHelper@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18013EF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
UINT32 __stdcall wil::details::GetFeatureVariantHelper(
        UINT32 featureId,
        FEATURE_CHANGE_TIME changeTime,
        UINT32 *payloadId,
        BOOL *hasNotification)
{
  return GetFeatureVariant(featureId, changeTime, payloadId, hasNotification);
}
