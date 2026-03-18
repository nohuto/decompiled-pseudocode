/*
 * XREFs of MonitorGetMonitorOrientationsFromMonitor @ 0x1C00C3D50
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C000FA7C (-_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  DXGMONITOR *v7; // rbx
  unsigned int MonitorOrientation; // eax
  struct _ERESOURCE *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGMONITOR *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v7 = v14;
    if ( !v14 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v11);
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    MonitorOrientation = DXGMONITOR::_GetMonitorOrientation(v7, a2, a3);
    v9 = (struct _ERESOURCE *)((char *)v7 + 296);
    v10 = MonitorOrientation;
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
    return v10;
  }
  return result;
}
