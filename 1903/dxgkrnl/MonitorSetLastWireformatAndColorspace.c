/*
 * XREFs of MonitorSetLastWireformatAndColorspace @ 0x1C00CF850
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_ClearColorSpaceTransform@DXGMONITOR@@AEAAXXZ @ 0x1C00C3D54 (-_ClearColorSpaceTransform@DXGMONITOR@@AEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorSetLastWireformatAndColorspace(DXGADAPTER *a1, unsigned int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  MONITOR_MGR *v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGMONITOR *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  struct DXGMONITOR *v24; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v11 = *((_QWORD *)a1 + 319);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v12);
    v11 = *((_QWORD *)a1 + 319);
  }
  v13 = *(MONITOR_MGR **)(v11 + 96);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, v8, v10);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v24 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v13, a2, 0, &v24);
  if ( (int)result >= 0 )
  {
    v18 = v24;
    if ( !v24 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v19);
      v22 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v18 + 296), 1u);
    *((_DWORD *)v18 + 188) = a3;
    *((_DWORD *)v18 + 187) = a4;
    DXGMONITOR::_ClearColorSpaceTransform(v18, v23);
    ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
