/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__ @ 0x180001510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UINT32 (__stdcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderApi__())(UINT32 featureId, FEATURE_CHANGE_TIME changeTime, UINT32 *payloadId, BOOL *hasNotification)
{
  UINT32 (__stdcall *result)(UINT32, FEATURE_CHANGE_TIME, UINT32 *, BOOL *); // rax

  g_wil_details_recordFeatureUsage = (void (__high *)(unsigned int, enum wil_details_ServiceReportingKind, unsigned int, union wil_details_FeaturePropertyCache *, struct wil_details_RecordUsageResult *))&wil::details::RecordFeatureUsageCallback;
  g_wil_details_apiGetFeatureEnabledState = GetFeatureEnabledState;
  g_wil_details_apiRecordFeatureUsage = RecordFeatureUsage;
  g_wil_details_apiRecordFeatureError = RecordFeatureError;
  g_wil_details_apiSubscribeFeatureStateChangeNotification = SubscribeFeatureStateChangeNotification;
  g_wil_details_apiUnsubscribeFeatureStateChangeNotification = UnsubscribeFeatureStateChangeNotification;
  result = wil::details::GetFeatureVariantHelper;
  g_wil_details_apiGetFeatureVariant = wil::details::GetFeatureVariantHelper;
  return result;
}
