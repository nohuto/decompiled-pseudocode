/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C00B659C
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1C00B39B0 (DxgkHandleForceProjectionMonitor.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B4100 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F6990 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     MonitorDRTTest @ 0x1C028FF58 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00E23D0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  PERESOURCE v13; // rax
  KSPIN_LOCK SpinLock; // r14
  int IsTargetForcable; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // [rsp+58h] [rbp+10h] BYREF
  __int64 v26; // [rsp+68h] [rbp+20h] BYREF

  v26 = a4;
  v8 = (int)a3;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11[3] = v8;
  v11[4] = v10;
  v11[5] = this;
  if ( !this || (_DWORD)v10 == -1 || (_DWORD)v8 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v21);
  }
  v13 = this[315];
  if ( !v13 || (SpinLock = v13->SpinLock) == 0 )
  {
    v22 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_11;
  v25 = 0;
  IsTargetForcable = DmmIsTargetForcable(this, (unsigned int)v10, &v25, (unsigned int)v8);
  v19 = IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v23 + 24) = v10;
    *(_QWORD *)(v23 + 32) = v19;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v19;
  }
  if ( v25 )
  {
LABEL_11:
    v26 = 0LL;
    v19 = (unsigned int)MONITOR_MGR::_HandleCreateSimulatedMonitor(
                          SpinLock,
                          (unsigned int)v10,
                          (unsigned int)v8,
                          0LL,
                          &v26,
                          a8);
    MONITOR_MGR::_LogMonitorPresentEvent(SpinLock, 1073741825LL, (unsigned int)v10, v19, 0LL);
    return (unsigned int)v19;
  }
  v24 = WdLogNewEntry5_WdWarning(v17, v16, v18);
  *(_QWORD *)(v24 + 24) = v10;
  WdLogEvent5_WdWarning(v24);
  return 3221225659LL;
}
