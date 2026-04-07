/*
 * XREFs of ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x1800778B8
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x180078510 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180034584 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003465C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x18003BC60 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18003BCA4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180077758 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureError(
        wil::details::FeatureStateManager *this,
        unsigned int a2,
        const struct FEATURE_ERROR *a3)
{
  wil *v6; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax

  if ( *(_BYTE *)this )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, 0LL, a3, 1, 0LL, 0LL, 0, 1uLL);
    if ( wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)this)
      && wil::details_abi::FeatureStateData::RecordFeatureError(*((PSRWLOCK *)this + 3), a2, a3)
      && !wil::ProcessShutdownInProgress(v6) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      if ( !*((_BYTE *)this + 65) )
      {
        if ( !*((_QWORD *)this + 6) )
        {
          ThreadpoolTimer = CreateThreadpoolTimer(
                              (PTP_TIMER_CALLBACK)lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_,
                              this,
                              0LL);
          wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
            (struct _TP_TIMER **)this + 6,
            ThreadpoolTimer);
        }
        wil::details::EnsureCoalescedTimer_SetTimer((struct _TP_TIMER **)this + 6, (_BYTE *)this + 65, 300000LL);
      }
      if ( this != (wil::details::FeatureStateManager *)-32LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    }
  }
}
