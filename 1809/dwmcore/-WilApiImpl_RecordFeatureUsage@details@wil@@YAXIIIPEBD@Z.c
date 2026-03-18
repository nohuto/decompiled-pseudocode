/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180086B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180085EF8 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180086498 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180086D4C (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@AEA_N_J@Z @ 0x180087818 (-EnsureCoalescedTimer_SetTimer@details@wil@@YAXAEAV-$unique_any_t@V-$unique_storage@U-$resource_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18008785C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180087AD8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18014354C (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180144340 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1801444B4 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x1801450A0 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, int a2, __int64 a3)
{
  unsigned int v3; // r14d
  BOOL v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rbx
  char v8; // di
  int v9; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  HANDLE ProcessHeap; // rax
  wil::details *v12; // rax
  bool v13; // sf
  char *v14; // rbx
  void *v15; // rax
  wil::details *v16; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v17[56]; // [rsp+40h] [rbp-168h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-130h]
  int v19; // [rsp+90h] [rbp-118h]
  _BYTE v20[208]; // [rsp+A0h] [rbp-108h] BYREF

  v3 = a3;
  v4 = a2 < 0;
  v5 = (unsigned int)this;
  v6 = a2 & 0x7FFFFFFF;
  if ( !(_DWORD)this && !(_DWORD)a3 && !v6 )
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
  if ( !(_DWORD)a3 && v6 != 254 )
  {
    if ( !g_wil_details_preventOnDemandStagingConfigReads
      && !(unsigned int)wil_details_StagingConfig_Load(v17, 0LL, a3, v20) )
    {
      wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v17, v5, v6, v4);
      if ( v19 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
    return;
  }
  if ( wil::details::g_featureStateManager )
  {
    v7 = (__int64)*(&xmmword_1803083F0 + 1);
    if ( *(&xmmword_1803083F0 + 1) )
      goto LABEL_6;
    v12 = (wil::details *)xmmword_1803083F0;
    if ( !xmmword_1803083F0 )
    {
      v16 = 0LL;
      v13 = (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                   qword_1803083E8,
                   &v16) < 0;
      v12 = (wil::details *)xmmword_1803083F0;
      if ( !v13 )
      {
        if ( !xmmword_1803083F0 )
          v12 = v16;
        xmmword_1803083F0 = v12;
      }
    }
    v14 = (char *)v12 + 32;
    if ( !v12 )
      v14 = 0LL;
    AcquireSRWLockExclusive(&stru_180308400);
    v15 = *(&xmmword_1803083F0 + 1);
    if ( !*(&xmmword_1803083F0 + 1) )
      v15 = v14;
    *(&xmmword_1803083F0 + 1) = v15;
    ReleaseSRWLockExclusive(&stru_180308400);
    v7 = (__int64)*(&xmmword_1803083F0 + 1);
    if ( *(&xmmword_1803083F0 + 1) )
    {
LABEL_6:
      if ( v6 == 254 )
      {
        wil::details_abi::FeatureStateData::RecordUsage((RTL_SRWLOCK *)v7);
      }
      else
      {
        if ( v6 > 0xC7 && v6 - 256 > 0xFF )
          return;
        AcquireSRWLockExclusive((PSRWLOCK)v7);
        if ( v6 - 256 <= 0x7F || v6 <= 7 && (v9 = 204, _bittest(&v9, v6)) )
        {
          wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage((wil::details_abi::RawUsageIndex *)(v7 + 8));
          v8 = *(_BYTE *)(v7 + 64);
        }
        else
        {
          v8 = wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,2>::RecordUsage(
                 v7 + 72,
                 v6,
                 v5,
                 v3);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)v7);
        if ( !v8 )
          return;
      }
      if ( !wil::details::g_processShutdownInProgress
        && (!wil::details::g_pfnRtlDllShutdownInProgress || !wil::details::g_pfnRtlDllShutdownInProgress()) )
      {
        AcquireSRWLockExclusive(&stru_180308400);
        if ( !byte_180308421 )
        {
          if ( !(_QWORD)xmmword_180308410 )
          {
            ThreadpoolTimer = CreateThreadpoolTimer(
                                (PTP_TIMER_CALLBACK)lambda_2586d60923f8412dce879009b83555c3_::_lambda_invoker_cdecl_,
                                &wil::details::g_featureStateManager,
                                0LL);
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
              &xmmword_180308410,
              ThreadpoolTimer);
          }
          wil::details::EnsureCoalescedTimer_SetTimer(&xmmword_180308410, &byte_180308421, 300000LL);
        }
        ReleaseSRWLockExclusive(&stru_180308400);
      }
    }
  }
}
