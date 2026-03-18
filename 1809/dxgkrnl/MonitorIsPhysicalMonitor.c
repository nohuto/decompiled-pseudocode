/*
 * XREFs of MonitorIsPhysicalMonitor @ 0x1C00B7964
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0001FF0 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

bool __fastcall MonitorIsPhysicalMonitor(struct HDXGMONITOR__ *a1)
{
  __int64 v1; // rcx
  struct DXGMONITOR *v2; // rbx
  struct _ERESOURCE *v3; // rcx
  bool v4; // bl
  __int64 v6; // rax
  struct DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || (int)MONITOR_MGR::_GetMonitorFromHandle(a1, &v7) < 0 )
    return 0;
  v2 = v7;
  if ( !v7 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v1);
    WdLogEvent5_WdAssertion(v6);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v2 + 296), 1u);
  v3 = (struct _ERESOURCE *)((char *)v2 + 296);
  v4 = *((_DWORD *)v2 + 108) == 1;
  ExReleaseResourceLite(v3);
  KeLeaveCriticalRegion();
  return v4;
}
