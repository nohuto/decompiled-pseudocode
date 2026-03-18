/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800E7CA8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800B16B8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_180339B58 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_180339B90 = 0;
  qword_180339B98 = 0LL;
  stru_180339B70.Ptr = 0LL;
  qword_180339B78 = 0LL;
  unk_180339B60 = 0LL;
  xmmword_180339B80 = 0LL;
  xmmword_180339BA0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_180339BB0);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_180339BF8);
  wil::details::g_featureStateManager = 1;
  xmmword_180339C40 = 0LL;
  xmmword_180339C50 = 0LL;
  return result;
}
