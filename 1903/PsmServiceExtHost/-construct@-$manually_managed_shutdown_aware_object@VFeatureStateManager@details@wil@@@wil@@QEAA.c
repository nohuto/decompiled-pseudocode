/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180047524
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18003EF60 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1800AC018 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_1800AC050 = 0;
  qword_1800AC058 = 0LL;
  SRWLock.Ptr = 0LL;
  qword_1800AC038 = 0LL;
  *(_OWORD *)&xmmword_1800AC020 = 0LL;
  xmmword_1800AC040 = 0LL;
  xmmword_1800AC060 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1800AC0B8);
  wil::details::g_featureStateManager = 1;
  xmmword_1800AC100 = 0LL;
  xmmword_1800AC110 = 0LL;
  return result;
}
