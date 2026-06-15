/*
 * XREFs of ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180006104
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006730 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004528 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180006FB4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180037752 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        unsigned __int16 a3,
        int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  _DWORD *Ptr; // rcx
  size_t v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _TP_TIMER **v14; // rdi
  struct _TP_TIMER *v15; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v17; // [rsp+20h] [rbp-28h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::details::g_processShutdownInProgress )
  {
    v8 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v8 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v8 )
    {
      AcquireSRWLockExclusive(pv + 5);
      HIDWORD(v17) = a3;
      LODWORD(v17) = a2;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[30], 0xCuLL) )
        goto LABEL_14;
      Ptr = pv[31].Ptr;
      v11 = ((char *)pv[32].Ptr - (char *)Ptr) & -(__int64)(Ptr < pv[32].Ptr);
      if ( Ptr )
      {
        if ( v11 >= 0xC )
        {
          *(_QWORD *)Ptr = v17;
          Ptr[2] = a4;
LABEL_13:
          pv[31].Ptr = (char *)pv[31].Ptr + 12;
LABEL_14:
          v14 = (struct _TP_TIMER **)&pv[7];
          if ( !LOBYTE(pv[8].Ptr) )
          {
            v15 = *v14;
            if ( *v14
              || (ThreadpoolTimer = CreateThreadpoolTimer(
                                      lambda_02deec49ef48fa12c9095208f5992a62_::_lambda_invoker_cdecl_,
                                      pv,
                                      0LL),
                  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                    &pv[7],
                    ThreadpoolTimer),
                  (v15 = *v14) != 0LL) )
            {
              pftDueTime = (struct _FILETIME)-50000000LL;
              SetThreadpoolTimer(v15, &pftDueTime, 0, 0x4E2u);
              LOBYTE(pv[8].Ptr) = 1;
            }
          }
          if ( pv != (RTL_SRWLOCK *)-40LL )
            ReleaseSRWLockExclusive(pv + 5);
          return;
        }
        memset_0(Ptr, 0, v11);
        *(_DWORD *)_o__errno(v13, v12) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(0LL, v9) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_13;
    }
  }
}
