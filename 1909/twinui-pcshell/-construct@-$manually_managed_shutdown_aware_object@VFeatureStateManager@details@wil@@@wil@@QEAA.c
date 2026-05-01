/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180088EDC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001070 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18011EF0C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  qword_1805C1C48 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_1805C1C80 = 0;
  qword_1805C1C88 = 0LL;
  stru_1805C1C60.Ptr = 0LL;
  qword_1805C1C68 = 0LL;
  xmmword_1805C1C50 = 0LL;
  xmmword_1805C1C70 = 0LL;
  xmmword_1805C1C90 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1805C1CA0);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1805C1CE8);
  wil::details::g_featureStateManager = 1;
  xmmword_1805C1D30 = 0LL;
  xmmword_1805C1D40 = 0LL;
  return result;
}
