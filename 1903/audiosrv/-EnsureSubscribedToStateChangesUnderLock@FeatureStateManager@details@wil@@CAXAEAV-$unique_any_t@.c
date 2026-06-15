/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18005CE00
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18005C9A8 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__WIL__WNF_STATE_NAME@@KP6AJ1KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z32KK@Z @ 0x18005CEA4 (-wil_details_RtlSubscribeWnfStateChangeNotification@@YAJPEAPEAU__WIL__WNF_USER_SUBSCRIPTION@@U__.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18005CF48 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?close_reset@?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x1800C1FE4 (-close_reset@-$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1-UnsubscribeWilWn.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        _QWORD *a1,
        const struct __WIL__WNF_TYPE_ID *a2,
        const void *a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+44h] [rbp-24h] BYREF
  const struct __WIL__WNF_TYPE_ID *v8; // [rsp+48h] [rbp-20h] BYREF

  v8 = a2;
  if ( !*a1 )
  {
    v6 = 0;
    v7 = 0;
    wil_details_NtQueryWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v8, a2, a3, &v6, 0LL, &v7);
    if ( *a1 )
      wil::details::resource_policy<__WIL__WNF_USER_SUBSCRIPTION *,void (*)(__WIL__WNF_USER_SUBSCRIPTION *),&void wil::details::UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,__WIL__WNF_USER_SUBSCRIPTION *,__WIL__WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>::close_reset();
    *a1 = 0LL;
    return wil_details_RtlSubscribeWnfStateChangeNotification(
             a1,
             v8,
             v6,
             lambda_81e364be9007e0d67239f6892a75acdf_::_lambda_invoker_cdecl_,
             a3);
  }
  return result;
}
