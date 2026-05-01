/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008645C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001070 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800FFEEC (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  qword_1805992E8 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_180599320 = 0;
  qword_180599328 = 0LL;
  stru_180599300.Ptr = 0LL;
  qword_180599308 = 0LL;
  xmmword_1805992F0 = 0LL;
  xmmword_180599310 = 0LL;
  xmmword_180599330 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180599340);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180599388);
  wil::details::g_featureStateManager = 1;
  xmmword_1805993D0 = 0LL;
  xmmword_1805993E0 = 0LL;
  return result;
}
