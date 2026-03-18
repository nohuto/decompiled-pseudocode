/*
 * XREFs of ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800B02A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800B11F0 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification(
        unsigned __int64 this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v2; // r8
  struct _RTL_CRITICAL_SECTION *v3; // rcx

  if ( (this & 0x80000000) != 0 )
  {
    if ( !wil::details::g_featureStateManager )
      return;
    v2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(this & 0xFFFFFFFF7FFFFFFFuLL);
    v3 = &stru_180339BF8;
    goto LABEL_4;
  }
  if ( wil::details::g_featureStateManager )
  {
    v2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)this;
    v3 = (struct _RTL_CRITICAL_SECTION *)&unk_180339BB0;
LABEL_4:
    wil::details_abi::SubscriptionList::Unsubscribe(v3, &stru_180339B70, v2);
  }
}
