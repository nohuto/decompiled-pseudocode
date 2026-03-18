/*
 * XREFs of ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x1800B0634
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x1800B06A0 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800B2680 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 */

void __fastcall wil::details::FeatureStateManager::EnsureSubscribedToProcessWideUsageFlushUnderLock(
        wil::details::FeatureStateManager *this)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **v1; // rsi
  RTL_SRWLOCK *v3; // rdi

  v1 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      *v1 = 0LL;
      AcquireSRWLockExclusive(v3);
      wil::details_abi::SubscriptionList::SubscribeUnderLock(
        (wil::details_abi::SubscriptionList *)&v3[25],
        v1,
        lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
        this);
      ReleaseSRWLockExclusive(v3);
    }
  }
}
