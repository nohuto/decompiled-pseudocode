/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C012F6B8
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C012DAC0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00EDA60 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C012ED68 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C012F75C (MonitorGetNumConnectedMonitor.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C012F850 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v4; // rdx
  MONITOR_MGR *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *a3 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v9);
    }
    v7 = *((_QWORD *)a1 + 319);
    if ( v7 && (v5 = *(MONITOR_MGR **)(v7 + 96)) != 0LL )
    {
      MONITOR_MGR::_IsUsingSimulatedMonitor(v5);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v5, v4, v6);
      *(_QWORD *)(v10 + 24) = a1;
      WdLogEvent5_WdError(v10);
    }
  }
  MonitorGetNumConnectedMonitor(a1);
  return 0LL;
}
