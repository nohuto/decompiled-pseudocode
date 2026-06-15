/*
 * XREFs of ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180005FF0
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180006880 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180005A3C (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180006264 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToUsageFlush(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *))
{
  int v6; // eax
  RTL_SRWLOCK *v7; // rbp

  *a2 = 0LL;
  if ( *(_BYTE *)this && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v6 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v6 && wil::details::FeatureStateManager::EnsureStateData(this) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      if ( !*((_QWORD *)this + 11) )
      {
        if ( *((_QWORD *)this + 3) )
        {
          *((_QWORD *)this + 11) = 0LL;
          v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 3);
          AcquireSRWLockExclusive(v7);
          wil::details_abi::SubscriptionList::SubscribeUnderLock(
            (wil::details_abi::SubscriptionList *)&v7[25],
            (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)this + 11,
            lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_,
            this);
          if ( v7 )
            ReleaseSRWLockExclusive(v7);
        }
      }
      wil::details_abi::SubscriptionList::SubscribeUnderLock(
        (wil::details::FeatureStateManager *)((char *)this + 168),
        a2,
        a3,
        0LL);
      if ( *a2 )
        *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)*a2 | 0x80000000);
      if ( this != (wil::details::FeatureStateManager *)-32LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    }
  }
}
