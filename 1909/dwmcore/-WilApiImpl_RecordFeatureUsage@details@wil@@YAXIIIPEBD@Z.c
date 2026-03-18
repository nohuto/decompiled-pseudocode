/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800B1340
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1800B0BEC (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800B13D0 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800B1494 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1800B156C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1801546A4 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x180154884 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x180155500 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, __int64 a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi
  HANDLE ProcessHeap; // rax
  _BYTE v7[56]; // [rsp+30h] [rbp-158h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-120h]
  int v9; // [rsp+80h] [rbp-108h]
  _BYTE v10[208]; // [rsp+90h] [rbp-F8h] BYREF

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)this;
  if ( (_DWORD)this || (_DWORD)a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        a2,
        a3);
    }
    else if ( (_DWORD)a3 || v4 == 254 )
    {
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        v4,
        (unsigned int)a3);
    }
    else if ( !g_wil_details_preventOnDemandStagingConfigReads
           && !(unsigned int)wil_details_StagingConfig_Load((__int64)v7, 0, a3, v10) )
    {
      wil_details_StagingConfig_FireNotification((struct wil_details_StagingConfig *)v7, v5, v4, v3);
      if ( v9 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
  }
  else if ( !wil::ProcessShutdownInProgress(this)
         && wil::details::FeatureStateManager::EnsureStateData((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager) )
  {
    wil::details_abi::SubscriptionList::OnSignaled((LPCRITICAL_SECTION)&qword_180339B68[25], qword_180339B68);
  }
}
