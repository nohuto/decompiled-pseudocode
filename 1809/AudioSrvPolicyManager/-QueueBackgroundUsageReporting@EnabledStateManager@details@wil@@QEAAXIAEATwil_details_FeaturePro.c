/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180021F2C
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800220C8 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004528 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180006FB4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     memset_0 @ 0x18003769E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180037752 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        char *pv,
        __int64 a2,
        union wil_details_FeaturePropertyCache *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  size_t v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _TP_TIMER **v11; // rdi
  struct _TP_TIMER *v12; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int128 v14; // [rsp+20h] [rbp-18h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( *pv && !wil::details::g_processShutdownInProgress )
  {
    v5 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
    if ( wil::details::g_pfnRtlDllShutdownInProgress )
      v5 = wil::details::g_pfnRtlDllShutdownInProgress();
    if ( !v5 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)pv + 1);
      LODWORD(v14) = 10164710;
      *((_QWORD *)&v14 + 1) = a3;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)(pv + 48), 0x10uLL) )
        goto LABEL_14;
      v7 = (_OWORD *)*((_QWORD *)pv + 7);
      v8 = (*((_QWORD *)pv + 8) - (_QWORD)v7) & -(__int64)((unsigned __int64)v7 < *((_QWORD *)pv + 8));
      if ( v7 )
      {
        if ( v8 >= 0x10 )
        {
          *v7 = v14;
LABEL_13:
          *((_QWORD *)pv + 7) += 16LL;
LABEL_14:
          v11 = (struct _TP_TIMER **)(pv + 16);
          if ( !pv[24] )
          {
            v12 = *v11;
            if ( *v11
              || (ThreadpoolTimer = CreateThreadpoolTimer(
                                      (PTP_TIMER_CALLBACK)lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_,
                                      pv,
                                      0LL),
                  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                    (struct _TP_TIMER **)pv + 2,
                    ThreadpoolTimer),
                  (v12 = *v11) != 0LL) )
            {
              pftDueTime = (struct _FILETIME)-3000000000LL;
              SetThreadpoolTimer(v12, &pftDueTime, 0, 0x124F8u);
              pv[24] = 1;
            }
          }
          if ( pv != (char *)-8LL )
            ReleaseSRWLockExclusive((PSRWLOCK)pv + 1);
          return;
        }
        memset_0(v7, 0, v8);
        *(_DWORD *)_o__errno(v10, v9) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(0LL, v6) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_13;
    }
  }
}
