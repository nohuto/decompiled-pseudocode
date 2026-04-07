/*
 * XREFs of ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18006FE34
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180001680 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_ @ 0x180007260 (_lambda_2586d60923f8412dce879009b83555c3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180033F10 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180034394 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180070C08 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::FlushUsage(wil::details::FeatureStateManager *this)
{
  if ( !wil::ProcessShutdownInProgress(this) && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)this) )
    wil::details_abi::SubscriptionList::OnSignaled(
      (LPCRITICAL_SECTION)(*((_QWORD *)this + 3) + 200LL),
      *((PSRWLOCK *)this + 3));
}
