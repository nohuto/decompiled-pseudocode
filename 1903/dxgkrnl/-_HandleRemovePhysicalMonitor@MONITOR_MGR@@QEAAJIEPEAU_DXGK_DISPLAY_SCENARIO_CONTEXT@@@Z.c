/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C826C
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C02C9B9C (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C005606C (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0175998 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7CCC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        struct _FAST_MUTEX *this,
        __int64 a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v4; // r15
  __int64 v5; // rdi
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MonitorInstance; // ebp
  __int64 v13; // r8
  __int64 v14; // rax
  DXGMONITOR *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  DXGMONITOR *v22; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v22 = 0LL;
  v9 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, (unsigned int)v5, 0, &v22);
  if ( MonitorInstance < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v13);
    *(_QWORD *)(v14 + 24) = v5;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    return (unsigned int)MonitorInstance;
  }
  v16 = v22;
  if ( !v22 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = 2LL;
  if ( (*((_DWORD *)v16 + 10) & 2) != 0 )
  {
    DXGMONITOR::_ChangeLIDStatus(v16, 0LL);
    if ( a3 )
      return 0LL;
  }
  if ( *((_DWORD *)v16 + 108) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList(this, (struct DXGMONITOR ***)v16);
  }
  else
  {
    v9 = *((_DWORD *)v16 + 108);
    v19 = (_QWORD *)((char *)v16 + 440);
    v16 = (DXGMONITOR *)*((_QWORD *)v16 + 55);
    *v19 = 0LL;
    if ( !v16 )
    {
      v20 = WdLogNewEntry5_WdError(v11, v10, v13);
      *(_QWORD *)(v20 + 24) = v5;
      *(_QWORD *)(v20 + 32) = this;
      WdLogEvent5_WdError(v20);
      return 3221226021LL;
    }
    v4 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( v4 )
  {
    v18 = 3LL;
  }
  else if ( *((_DWORD *)v16 + 148) )
  {
    v18 = 5LL;
    goto LABEL_20;
  }
  if ( !v4 )
LABEL_20:
    v9 = 1;
  MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v16 + 11), 0, v18, v9, (__int64)a4);
  return MONITOR_MGR::_DestroyPhysicalMonitor(this, v16, a4);
}
