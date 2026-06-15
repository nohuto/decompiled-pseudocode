/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800387E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800225F0 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800389C8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18005F364 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18005F6E8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18005FA28 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180063A74 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800BBCFC (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1800BF328 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800BFF54 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800C09E0 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x1800C1D3C (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // ebp
  __int64 v7; // rbx
  int v8; // eax
  char v9; // di
  int v10; // eax
  struct _TP_TIMER *v11; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  HANDLE ProcessHeap; // rax
  void *v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  void *v17; // rax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v19[56]; // [rsp+40h] [rbp-168h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-130h]
  int v21; // [rsp+90h] [rbp-118h]
  _BYTE v22[208]; // [rsp+A0h] [rbp-108h] BYREF

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = a3;
  v6 = (unsigned int)this;
  if ( (_DWORD)this || (_DWORD)a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        a2,
        a3);
      return;
    }
    if ( (_DWORD)a3 || v4 == 254 )
    {
      if ( wil::details::g_featureStateManager )
      {
        v7 = (__int64)*(&xmmword_1801B7290 + 1);
        if ( *(&xmmword_1801B7290 + 1) )
          goto LABEL_6;
        v14 = xmmword_1801B7290;
        if ( !xmmword_1801B7290 )
        {
          pftDueTime = 0LL;
          v15 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                  qword_1801B7288,
                  &pftDueTime);
          v14 = xmmword_1801B7290;
          if ( v15 >= 0 )
          {
            if ( !xmmword_1801B7290 )
              v14 = (void *)pftDueTime;
            xmmword_1801B7290 = v14;
          }
        }
        v16 = ((unsigned __int64)v14 + 32) & -(__int64)(v14 != 0LL);
        AcquireSRWLockExclusive(&SRWLock);
        v17 = *(&xmmword_1801B7290 + 1);
        if ( !*(&xmmword_1801B7290 + 1) )
          v17 = (void *)v16;
        *(&xmmword_1801B7290 + 1) = v17;
        ReleaseSRWLockExclusive(&SRWLock);
        v7 = (__int64)*(&xmmword_1801B7290 + 1);
        if ( *(&xmmword_1801B7290 + 1) )
        {
LABEL_6:
          if ( v4 == 254 )
          {
            wil::details_abi::FeatureStateData::RecordUsage((PSRWLOCK)v7);
            v9 = 1;
          }
          else
          {
            if ( v4 > 0xC7 && v4 - 256 > 0xFF )
              return;
            AcquireSRWLockExclusive((PSRWLOCK)v7);
            if ( v4 <= 7 && (v8 = 204, _bittest(&v8, v4)) || v4 - 256 <= 0x7F )
            {
              wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)(v7 + 8));
              v9 = *(_BYTE *)(v7 + 64);
            }
            else
            {
              v9 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                     v7 + 72,
                     v4,
                     v6,
                     v5);
            }
            ReleaseSRWLockExclusive((PSRWLOCK)v7);
          }
          if ( v9 && !wil::details::g_processShutdownInProgress )
          {
            v10 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
            if ( wil::details::g_pfnRtlDllShutdownInProgress )
              v10 = wil::details::g_pfnRtlDllShutdownInProgress();
            if ( !v10 )
            {
              AcquireSRWLockExclusive(&SRWLock);
              if ( !byte_1801B72C1 )
              {
                v11 = pti;
                if ( pti
                  || (ThreadpoolTimer = CreateThreadpoolTimer(
                                          lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_,
                                          &wil::details::g_featureStateManager,
                                          0LL),
                      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
                        &pti,
                        ThreadpoolTimer),
                      (v11 = pti) != 0LL) )
                {
                  pftDueTime = (struct _FILETIME)-3000000000LL;
                  SetThreadpoolTimer(v11, &pftDueTime, 0, 0x124F8u);
                  byte_1801B72C1 = 1;
                }
              }
              ReleaseSRWLockExclusive(&SRWLock);
            }
          }
        }
      }
    }
    else if ( !g_wil_details_preventOnDemandStagingConfigReads
           && !(unsigned int)wil_details_StagingConfig_Load(v19, 0LL, a3, v22) )
    {
      wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v19, v6, v4, v3);
      if ( v21 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
  }
  else if ( !wil::ProcessShutdownInProgress(this)
         && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
  {
    wil::details_abi::SubscriptionList::OnSignaled(
      (LPCRITICAL_SECTION)*(&xmmword_1801B7290 + 1) + 5,
      (PSRWLOCK)*(&xmmword_1801B7290 + 1));
  }
}
