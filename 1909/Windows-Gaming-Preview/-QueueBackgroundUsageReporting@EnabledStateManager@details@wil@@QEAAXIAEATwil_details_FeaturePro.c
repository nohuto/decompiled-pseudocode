/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180007024
 * Callers:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180007750 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_detail.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004670 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800079F0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memset_0 @ 0x180043A5E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180043B2A (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        union wil_details_FeaturePropertyCache *a3)
{
  int v6; // eax
  _OWORD *Ptr; // rcx
  size_t v8; // r8
  __int64 v9; // rcx
  struct _TP_TIMER **v10; // rdi
  struct _TP_TIMER *v11; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int128 v13; // [rsp+20h] [rbp-18h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( LOBYTE(pv->Ptr) && !wil::details::g_processShutdownInProgress )
  {
    v6 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v6 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v6 )
    {
      AcquireSRWLockExclusive(pv + 1);
      LODWORD(v13) = a2;
      *((_QWORD *)&v13 + 1) = a3;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[6], 0x10uLL) )
        goto LABEL_14;
      Ptr = pv[7].Ptr;
      v8 = ((char *)pv[8].Ptr - (char *)Ptr) & -(__int64)(Ptr < pv[8].Ptr);
      if ( Ptr )
      {
        if ( v8 >= 0x10 )
        {
          *Ptr = v13;
LABEL_13:
          pv[7].Ptr = (char *)pv[7].Ptr + 16;
LABEL_14:
          v10 = (struct _TP_TIMER **)&pv[2];
          if ( !LOBYTE(pv[3].Ptr) )
          {
            v11 = *v10;
            if ( *v10
              || (ThreadpoolTimer = CreateThreadpoolTimer(
                                      lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_,
                                      pv,
                                      0LL),
                  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
                    &pv[2],
                    ThreadpoolTimer),
                  (v11 = *v10) != 0LL) )
            {
              pftDueTime = (struct _FILETIME)-3000000000LL;
              SetThreadpoolTimer(v11, &pftDueTime, 0, 0x124F8u);
              LOBYTE(pv[3].Ptr) = 1;
            }
          }
          if ( pv != (RTL_SRWLOCK *)-8LL )
            ReleaseSRWLockExclusive(pv + 1);
          return;
        }
        memset_0(Ptr, 0, v8);
        *(_DWORD *)_o__errno(v9) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(0LL) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_13;
    }
  }
}
