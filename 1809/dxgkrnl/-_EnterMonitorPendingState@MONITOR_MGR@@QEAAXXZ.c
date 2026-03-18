/*
 * XREFs of ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C004EFA8
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_EnterMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // ecx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_QWORD *)this + 96);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 20);
    *(_DWORD *)(v4 + 20) = v5 + 1;
    if ( !v5 )
      KeClearEvent((PRKEVENT)(*((_QWORD *)this + 96) + 24LL));
  }
}
