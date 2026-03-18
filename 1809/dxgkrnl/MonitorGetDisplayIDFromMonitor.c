/*
 * XREFs of MonitorGetDisplayIDFromMonitor @ 0x1C00C5B64
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0239510 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayIDBlob@DXGMONITOR@@QEBAJIPEAIPEAE@Z @ 0x1C00C45BC (-_GetDisplayIDBlob@DXGMONITOR@@QEBAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetDisplayIDFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  DXGMONITOR *v9; // rbx
  unsigned int DisplayIDBlob; // eax
  struct _ERESOURCE *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  DXGMONITOR *v16; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v16);
  if ( (int)result >= 0 )
  {
    v9 = v16;
    if ( !v16 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v13);
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 296), 1u);
    DisplayIDBlob = DXGMONITOR::_GetDisplayIDBlob(v9, a2, a3, a4);
    v11 = (struct _ERESOURCE *)((char *)v9 + 296);
    v12 = DisplayIDBlob;
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
    return v12;
  }
  return result;
}
