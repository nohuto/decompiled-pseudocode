/*
 * XREFs of MonitorSetLastWireformatAndColorspace @ 0x1C00CFB18
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorSetLastWireformatAndColorspace(DXGADAPTER *a1, unsigned int a2, int a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  MONITOR_MGR *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)a1 + 315);
  if ( !v9 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v14);
    v9 = *((_QWORD *)a1 + 315);
  }
  v10 = *(MONITOR_MGR **)(v9 + 96);
  if ( !v10 )
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v19 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v10, a2, 0, &v19);
  if ( (int)result >= 0 )
  {
    v13 = v19;
    if ( !v19 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v16);
      v18 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v18);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v13 + 296), 1u);
    *((_DWORD *)v13 + 187) = a3;
    *((_DWORD *)v13 + 186) = a4;
    ExReleaseResourceLite((PERESOURCE)((char *)v13 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
