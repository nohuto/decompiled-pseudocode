/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C029094C
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0275EF0 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C029B4C0 (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_GENERIC_DESCRIPTOR *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  int MonitorInstance; // edi
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int MonitorDescriptorIDs; // eax
  struct _ERESOURCE *v22; // rcx
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 315);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v11);
    v10 = *((_QWORD *)this + 315);
  }
  v12 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v23 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v12, v5, 1, &v23);
  if ( MonitorInstance >= 0 )
  {
    v17 = v23;
    if ( !v23 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v18);
      v20 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v20);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
    MonitorDescriptorIDs = DXGMONITOR::_GetMonitorDescriptorIDs(v17, a3);
    v22 = (struct _ERESOURCE *)((char *)v17 + 296);
    MonitorInstance = MonitorDescriptorIDs;
    ExReleaseResourceLite(v22);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
