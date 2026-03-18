/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C00EC548
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00ED968 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 * Callees:
 *     ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C00067FC (-_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 MonitorGetMonitorOrientationsFromTarget(DXGADAPTER *a1, unsigned int a2, unsigned int *a3, ...)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  MONITOR_MGR *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGMONITOR *v14; // rbx
  unsigned int MonitorOrientation; // eax
  struct _ERESOURCE *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  DXGMONITOR *v24; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, DXGMONITOR *);
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)a1 + 319);
  if ( !v9 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v18);
    v9 = *((_QWORD *)a1 + 319);
  }
  v10 = *(MONITOR_MGR **)(v9 + 96);
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v6, v8);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  v24 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v10, a2, 1u, (struct DXGMONITOR **)va);
  if ( (int)result >= 0 )
  {
    v14 = v24;
    if ( !v24 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v13, v12);
      WdLogEvent5_WdAssertion(v20);
      v23 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v23);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
    MonitorOrientation = DXGMONITOR::_GetMonitorOrientation(v14, a3, 0LL);
    v16 = (struct _ERESOURCE *)((char *)v14 + 296);
    v17 = MonitorOrientation;
    ExReleaseResourceLite(v16);
    KeLeaveCriticalRegion();
    return v17;
  }
  return result;
}
