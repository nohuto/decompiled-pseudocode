/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800EB338
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180086460 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1803083E8 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  unk_180308420 = 0;
  qword_180308428 = 0LL;
  stru_180308400.Ptr = 0LL;
  qword_180308408 = 0LL;
  *(_OWORD *)&xmmword_1803083F0 = 0LL;
  xmmword_180308410 = 0LL;
  xmmword_180308430 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_180308440);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_180308488);
  wil::details::g_featureStateManager = 1;
  xmmword_1803084D0 = 0LL;
  xmmword_1803084E0 = 0LL;
  return result;
}
