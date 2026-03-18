/*
 * XREFs of MonitorSerializeMonitor @ 0x1C02914C0
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0283E68 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C0299694 (-_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall MonitorSerializeMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  DXGMONITOR *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // eax
  struct _ERESOURCE *v10; // rcx
  unsigned int v11; // ebx
  DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  if ( (int)result >= 0 )
  {
    v7 = v12;
    if ( !v12 )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    v9 = DXGMONITOR::_SerializeMonitor(v7, a2, a3);
    v10 = (struct _ERESOURCE *)((char *)v7 + 296);
    v11 = v9;
    ExReleaseResourceLite(v10);
    KeLeaveCriticalRegion();
    return v11;
  }
  return result;
}
