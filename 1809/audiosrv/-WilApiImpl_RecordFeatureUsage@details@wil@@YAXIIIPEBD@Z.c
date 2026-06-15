/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18000ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18000AD64 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x18000C844 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18002EAA4 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18004A088 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18004AB4C (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18005F2B0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1800B07A8 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800B1B94 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800B2654 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x1800B3A3C (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
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
  PTP_TIMER ThreadpoolTimer; // rax
  HANDLE ProcessHeap; // rax
  void *v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v18[56]; // [rsp+40h] [rbp-168h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-130h]
  int v20; // [rsp+90h] [rbp-118h]
  _BYTE v21[208]; // [rsp+A0h] [rbp-108h] BYREF

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = a3;
  v6 = (unsigned int)this;
  if ( !(_DWORD)this && !(_DWORD)a3 && !v4 )
  {
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
    return;
  }
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
      v7 = (__int64)*(&xmmword_1801B3220 + 1);
      if ( *(&xmmword_1801B3220 + 1) )
        goto LABEL_6;
      v13 = xmmword_1801B3220;
      if ( !xmmword_1801B3220 )
      {
        v17 = 0LL;
        v14 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                qword_1801B3218,
                &v17);
        v13 = xmmword_1801B3220;
        if ( v14 >= 0 )
        {
          if ( !xmmword_1801B3220 )
            v13 = v17;
          xmmword_1801B3220 = v13;
        }
      }
      v15 = ((unsigned __int64)v13 + 32) & -(__int64)(v13 != 0LL);
      AcquireSRWLockExclusive(&SRWLock);
      v16 = *(&xmmword_1801B3220 + 1);
      if ( !*(&xmmword_1801B3220 + 1) )
        v16 = (void *)v15;
      *(&xmmword_1801B3220 + 1) = v16;
      ReleaseSRWLockExclusive(&SRWLock);
      v7 = (__int64)*(&xmmword_1801B3220 + 1);
      if ( *(&xmmword_1801B3220 + 1) )
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
            wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
              v7 + 8,
              v4,
              v6);
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
            if ( !byte_1801B3251 )
            {
              if ( !(_QWORD)xmmword_1801B3240 )
              {
                ThreadpoolTimer = CreateThreadpoolTimer(
                                    lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_,
                                    &wil::details::g_featureStateManager,
                                    0LL);
                wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
                  &xmmword_1801B3240,
                  ThreadpoolTimer);
              }
              wil::details::EnsureCoalescedTimer_SetTimer(&xmmword_1801B3240, &byte_1801B3251, 300000LL);
            }
            ReleaseSRWLockExclusive(&SRWLock);
          }
        }
      }
    }
  }
  else if ( !g_wil_details_preventOnDemandStagingConfigReads
         && !(unsigned int)wil_details_StagingConfig_Load(v18, 0LL, a3, v21) )
  {
    wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v18, v6, v4, v3);
    if ( v20 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
}
