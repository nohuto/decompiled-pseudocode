/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180047AA4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18003E610 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_18009BD28 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_18009BD60 = 0;
  qword_18009BD68 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_18009BD48 = 0LL;
  *(_OWORD *)&xmmword_18009BD30 = 0LL;
  xmmword_18009BD50 = 0LL;
  xmmword_18009BD70 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_18009BDC8);
  wil::details::g_featureStateManager = 1;
  xmmword_18009BE10 = 0LL;
  xmmword_18009BE20 = 0LL;
  return result;
}
