/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800E6DF8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800AB4F8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_18033CA68 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_18033CAA0 = 0;
  qword_18033CAA8 = 0LL;
  stru_18033CA80.Ptr = 0LL;
  qword_18033CA88 = 0LL;
  unk_18033CA70 = 0LL;
  xmmword_18033CA90 = 0LL;
  xmmword_18033CAB0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_18033CAC0);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_18033CB08);
  wil::details::g_featureStateManager = 1;
  xmmword_18033CB50 = 0LL;
  xmmword_18033CB60 = 0LL;
  return result;
}
