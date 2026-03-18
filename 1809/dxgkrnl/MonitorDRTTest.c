/*
 * XREFs of MonitorDRTTest @ 0x1C028FF58
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C00B659C (MonitorCreateSimulatedMonitor.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C027A660 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C028E598 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C0290138 (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  MONITOR_MGR *v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-28h]
  int v31; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 315);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225659LL;
  }
  v18 = *((_DWORD *)a2 + 3);
  if ( !v18 )
  {
    v28 = *(MONITOR_MGR **)(v16 + 96);
    if ( !v28 )
    {
      v29 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v29 + 24) = this;
      WdLogEvent5_WdError(v29);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v28, a2, v13, v14);
  }
  v19 = (unsigned int)(v18 - 1);
  if ( !(_DWORD)v19 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((unsigned int *)a2 + 5),
                         v26,
                         v30,
                         0,
                         v31,
                         (__int64)a3);
    goto LABEL_20;
  }
  if ( (_DWORD)v19 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v23);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
LABEL_20:
    v21 = SimulatedMonitor;
    DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 1);
    return v21;
  }
  v20 = WdLogNewEntry5_WdWarning(v19, v16, v13);
  *(_QWORD *)(v20 + 24) = *((unsigned int *)a2 + 3);
  *(_QWORD *)(v20 + 32) = a2;
  WdLogEvent5_WdWarning(v20);
  return (unsigned int)-1073741811;
}
