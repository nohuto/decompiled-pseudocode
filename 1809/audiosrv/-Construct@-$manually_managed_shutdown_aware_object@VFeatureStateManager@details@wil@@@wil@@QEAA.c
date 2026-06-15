/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005FCF4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001130 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180048780 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1801B3218 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  unk_1801B3250 = 0;
  qword_1801B3258 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_1801B3238 = 0LL;
  *(_OWORD *)&xmmword_1801B3220 = 0LL;
  xmmword_1801B3240 = 0LL;
  xmmword_1801B3260 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1801B3270);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1801B32B8);
  wil::details::g_featureStateManager = 1;
  xmmword_1801B3300 = 0LL;
  xmmword_1801B3310 = 0LL;
  return result;
}
