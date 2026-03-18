/*
 * XREFs of MonitorGetDisplayIDFromMonitor @ 0x1C0143424
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00E7750 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0148E40 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayIDBlob@DXGMONITOR@@QEBAJIPEAIPEAE@Z @ 0x1C01434DC (-_GetDisplayIDBlob@DXGMONITOR@@QEBAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetDisplayIDFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGMONITOR *v10; // rbx
  int DisplayIDBlob; // eax
  struct _ERESOURCE *v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DXGMONITOR *v18; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v18 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v18);
  if ( (int)result >= 0 )
  {
    v10 = v18;
    if ( !v18 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v14);
      v17 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 296), 1u);
    DisplayIDBlob = DXGMONITOR::_GetDisplayIDBlob(v10, a2, a3, a4);
    v12 = (struct _ERESOURCE *)((char *)v10 + 296);
    v13 = DisplayIDBlob;
    ExReleaseResourceLite(v12);
    KeLeaveCriticalRegion();
    return v13;
  }
  return result;
}
