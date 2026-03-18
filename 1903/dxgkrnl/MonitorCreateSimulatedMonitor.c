/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C02C8E14
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0124EB0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026DE58 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02701D0 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C02C8F9C (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00FBB48 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0128508 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7E90 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  PERESOURCE v16; // rax
  __int64 v17; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  int IsTargetForceable; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v27; // [rsp+58h] [rbp+10h] BYREF
  __int64 v28; // [rsp+68h] [rbp+20h] BYREF

  v28 = a4;
  v8 = a3;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v11[3] = v8;
  v11[4] = v10;
  v11[5] = this;
  if ( !this || (_DWORD)v10 == -1 || (_DWORD)v8 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = this[319];
  if ( !v16 || (SpinLock = (struct _FAST_MUTEX *)v16->SpinLock) == 0LL )
  {
    v17 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_16;
  v27 = 0;
  IsTargetForceable = DmmIsTargetForceable((__int64)this, (unsigned int)v10, &v27, v8);
  v24 = IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v10;
    *(_QWORD *)(v25 + 32) = v24;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v24;
  }
  if ( v27 )
  {
LABEL_16:
    v28 = 0LL;
    LODWORD(v24) = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                     SpinLock,
                     (unsigned int)v10,
                     v8,
                     0LL,
                     (struct DXGMONITOR *)&v28,
                     a8);
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 1073741825LL, v10, v24, 0LL);
    return (unsigned int)v24;
  }
  v26 = WdLogNewEntry5_WdWarning(v22, v21, v23);
  *(_QWORD *)(v26 + 24) = v10;
  WdLogEvent5_WdWarning(v26);
  return 3221225659LL;
}
