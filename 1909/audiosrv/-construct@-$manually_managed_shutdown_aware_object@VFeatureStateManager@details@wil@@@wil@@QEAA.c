/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180064310
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001140 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18005013C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1801B7288 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  unk_1801B72C0 = 0;
  qword_1801B72C8 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_1801B72A8 = 0LL;
  *(_OWORD *)&xmmword_1801B7290 = 0LL;
  *(_OWORD *)&pti = 0LL;
  xmmword_1801B72D0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1801B72E0);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1801B7328);
  wil::details::g_featureStateManager = 1;
  xmmword_1801B7370 = 0LL;
  xmmword_1801B7380 = 0LL;
  return result;
}
