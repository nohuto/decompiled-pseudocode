/*
 * XREFs of ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@XZ @ 0x1800DE4E4
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18001B434 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_detail.c)
 * Callees:
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E21D8 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

wil::details **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>>::operator&(
        wil::details **a1)
{
  wil::details *v1; // rsi
  DWORD LastError; // ebx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // rdx

  v1 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v1, v4);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  return a1;
}
