/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C00E4A4C
 * Callers:
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00E5410 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C000FA7C (-_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 MonitorGetMonitorOrientationsFromTarget(DXGADAPTER *a1, unsigned int a2, unsigned int *a3, ...)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _FAST_MUTEX *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  DXGMONITOR *v11; // rbx
  unsigned int MonitorOrientation; // eax
  struct _ERESOURCE *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  DXGMONITOR *v20; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, DXGMONITOR *);
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v7 = *((_QWORD *)a1 + 315);
  if ( !v7 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v15);
    v7 = *((_QWORD *)a1 + 315);
  }
  v8 = *(struct _FAST_MUTEX **)(v7 + 96);
  if ( !v8 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v20 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v8, a2, 1, (struct DXGMONITOR **)va);
  if ( (int)result >= 0 )
  {
    v11 = v20;
    if ( !v20 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v17);
      v19 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 296), 1u);
    MonitorOrientation = DXGMONITOR::_GetMonitorOrientation(v11, a3, 0LL);
    v13 = (struct _ERESOURCE *)((char *)v11 + 296);
    v14 = MonitorOrientation;
    ExReleaseResourceLite(v13);
    KeLeaveCriticalRegion();
    return v14;
  }
  return result;
}
