/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800836A4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001070 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800DDFC4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  __int64 result; // rax

  qword_18050F1E8 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_18050F220 = 0;
  qword_18050F228 = 0LL;
  stru_18050F200.Ptr = 0LL;
  qword_18050F208 = 0LL;
  *(_OWORD *)&xmmword_18050F1F0 = 0LL;
  xmmword_18050F210 = 0LL;
  xmmword_18050F230 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_18050F240);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_18050F288);
  wil::details::g_featureStateManager = 1;
  xmmword_18050F2D0 = 0LL;
  xmmword_18050F2E0 = 0LL;
  return result;
}
