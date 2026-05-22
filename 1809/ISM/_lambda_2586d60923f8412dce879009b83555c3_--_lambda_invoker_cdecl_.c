/*
 * XREFs of _lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_ @ 0x180031720
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18002E0EC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18002E278 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002E75C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  RTL_SRWLOCK *v6; // rcx

  if ( *Context )
  {
    v4 = (RTL_SRWLOCK *)(Context + 32);
    AcquireSRWLockExclusive((PSRWLOCK)Context + 4);
    Context[65] = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( !wil::details::g_processShutdownInProgress )
    {
      v5 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v5 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v5 && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)Context) )
        wil::details_abi::SubscriptionList::OnSignaled(
          (LPCRITICAL_SECTION)(*((_QWORD *)Context + 3) + 200LL),
          *((PSRWLOCK *)Context + 3));
    }
    v6 = (RTL_SRWLOCK *)*((_QWORD *)Context + 3);
    if ( v6 )
      wil::details_abi::FeatureStateData::RecordUsage(v6);
  }
}
