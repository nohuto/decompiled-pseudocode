/*
 * XREFs of MonitorGetMonitorOrientationsFromMonitor @ 0x1C00E7E38
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00E7750 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C000628C (-_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGMONITOR *v8; // rbx
  unsigned int MonitorOrientation; // eax
  struct _ERESOURCE *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGMONITOR *v16; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v16);
  if ( (int)result >= 0 )
  {
    v8 = v16;
    if ( !v16 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v12);
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 296), 1u);
    MonitorOrientation = DXGMONITOR::_GetMonitorOrientation(v8, a2, a3);
    v10 = (struct _ERESOURCE *)((char *)v8 + 296);
    v11 = MonitorOrientation;
    ExReleaseResourceLite(v10);
    KeLeaveCriticalRegion();
    return v11;
  }
  return result;
}
