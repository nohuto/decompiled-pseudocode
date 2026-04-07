/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18004BCB0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180039F48 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1800D4EC8 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_1800D4F00 = 0;
  qword_1800D4F08 = 0LL;
  stru_1800D4EE0.Ptr = 0LL;
  qword_1800D4EE8 = 0LL;
  *(_OWORD *)&xmmword_1800D4ED0 = 0LL;
  xmmword_1800D4EF0 = 0LL;
  xmmword_1800D4F10 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&CriticalSection);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1800D4F68);
  wil::details::g_featureStateManager = 1;
  xmmword_1800D4FB0 = 0LL;
  xmmword_1800D4FC0 = 0LL;
  return result;
}
