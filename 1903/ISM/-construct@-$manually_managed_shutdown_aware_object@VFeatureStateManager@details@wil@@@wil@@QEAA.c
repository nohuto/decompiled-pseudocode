/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18002B2AC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800295C8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  qword_1801E0C88 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  word_1801E0CC0 = 0;
  qword_1801E0CC8 = 0LL;
  stru_1801E0CA0.Ptr = 0LL;
  qword_1801E0CA8 = 0LL;
  *(_OWORD *)&xmmword_1801E0C90 = 0LL;
  xmmword_1801E0CB0 = 0LL;
  xmmword_1801E0CD0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1801E0CE0);
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1801E0D28);
  wil::details::g_featureStateManager = 1;
  xmmword_1801E0D70 = 0LL;
  xmmword_1801E0D80 = 0LL;
  return result;
}
