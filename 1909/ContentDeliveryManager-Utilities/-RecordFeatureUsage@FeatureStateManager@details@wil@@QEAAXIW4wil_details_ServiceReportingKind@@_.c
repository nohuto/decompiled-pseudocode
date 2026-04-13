/*
 * XREFs of ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800089A8
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180009140 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000887C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180008C78 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800130FC (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180013130 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800135F4 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureUsage(
        _BYTE *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // eax
  char v10; // bl
  int v11; // eax
  struct _TP_TIMER **v12; // rdi
  struct _TP_TIMER *v13; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  if ( *a1 && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)a1) )
  {
    v8 = *((_QWORD *)a1 + 3);
    if ( a3 == 254 )
    {
      wil::details_abi::FeatureStateData::RecordUsage(*((PSRWLOCK *)a1 + 3));
      v10 = 1;
    }
    else
    {
      if ( a3 >= 0xC8 && ((int)a3 < 256 || a3 >= 0x200) )
        return;
      AcquireSRWLockExclusive(*((PSRWLOCK *)a1 + 3));
      if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
      {
        wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(v8 + 8, a3, a2);
        v10 = *(_BYTE *)(v8 + 64);
      }
      else
      {
        v10 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                v8 + 72,
                a3,
                a2,
                a4);
      }
      if ( v8 )
        ReleaseSRWLockExclusive((PSRWLOCK)v8);
    }
    if ( v10 && !wil::details::g_processShutdownInProgress )
    {
      v11 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
      if ( wil::details::g_pfnRtlDllShutdownInProgress )
        v11 = wil::details::g_pfnRtlDllShutdownInProgress();
      if ( !v11 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)a1 + 4);
        v12 = (struct _TP_TIMER **)(a1 + 48);
        if ( !a1[65] )
        {
          v13 = *v12;
          if ( *v12
            || (ThreadpoolTimer = CreateThreadpoolTimer(
                                    lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_,
                                    a1,
                                    0LL),
                wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
                  a1 + 48,
                  ThreadpoolTimer),
                (v13 = *v12) != 0LL) )
          {
            pftDueTime = (_FILETIME)-3000000000LL;
            SetThreadpoolTimer(v13, &pftDueTime, 0, 0x124F8u);
            a1[65] = 1;
          }
        }
        if ( a1 != (_BYTE *)-32LL )
          ReleaseSRWLockExclusive((PSRWLOCK)a1 + 4);
      }
    }
  }
}
