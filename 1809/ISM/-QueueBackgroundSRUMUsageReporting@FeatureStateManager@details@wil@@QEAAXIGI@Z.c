/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18002E628
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18002EC30 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18002CA40 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180030C74 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memcpy_s_0 @ 0x180032764 (memcpy_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        unsigned __int16 a3,
        int a4)
{
  int v8; // eax
  struct _TP_TIMER **v9; // rdi
  struct _TP_TIMER *v10; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  _DWORD Source[10]; // [rsp+20h] [rbp-28h] BYREF
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::details::g_processShutdownInProgress )
  {
    v8 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v8 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v8 )
    {
      AcquireSRWLockExclusive(pv + 5);
      Source[2] = a4;
      Source[1] = a3;
      Source[0] = a2;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[30], 0xCuLL) )
      {
        memcpy_s_0(
          pv[31].Ptr,
          ((char *)pv[32].Ptr - (char *)pv[31].Ptr) & -(__int64)(pv[31].Ptr < pv[32].Ptr),
          Source,
          0xCuLL);
        pv[31].Ptr = (char *)pv[31].Ptr + 12;
      }
      v9 = (struct _TP_TIMER **)&pv[7];
      if ( !LOBYTE(pv[8].Ptr) )
      {
        v10 = *v9;
        if ( *v9
          || (ThreadpoolTimer = CreateThreadpoolTimer(
                                  lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_,
                                  pv,
                                  0LL),
              wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                &pv[7],
                ThreadpoolTimer),
              (v10 = *v9) != 0LL) )
        {
          pftDueTime = (struct _FILETIME)-50000000LL;
          SetThreadpoolTimer(v10, &pftDueTime, 0, 0x4E2u);
          LOBYTE(pv[8].Ptr) = 1;
        }
      }
      if ( pv != (RTL_SRWLOCK *)-40LL )
        ReleaseSRWLockExclusive(pv + 5);
    }
  }
}
