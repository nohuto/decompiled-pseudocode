/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004DF80
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180034414 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1800DBED8 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_1800DBF10 = 0;
  qword_1800DBF18 = 0LL;
  stru_1800DBEF0.Ptr = 0LL;
  qword_1800DBEF8 = 0LL;
  *(_OWORD *)&xmmword_1800DBEE0 = 0LL;
  xmmword_1800DBF00 = 0LL;
  xmmword_1800DBF20 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1800DBF78);
  wil::details::g_featureStateManager = 1;
  xmmword_1800DBFC0 = 0LL;
  xmmword_1800DBFD0 = 0LL;
  return result;
}
