/*
 * XREFs of ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00FBB48
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00FC21C (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175098 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0176448 (MonitorCreatePhysicalMonitor.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026DE58 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02701D0 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02C42B4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02C8E14 (MonitorCreateSimulatedMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02C9B9C (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00FC190 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetForceable(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 IsTargetForceable; // al
  unsigned int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+40h] [rbp+8h]

  v4 = (unsigned int)a2;
  *a3 = 0;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_25:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  v8 = *(_QWORD *)(a1 + 2552);
  if ( !v8 )
  {
    v19 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_25;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( !v9 )
  {
    v21 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
  v27 = v9;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v9 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
  v11 = *(_QWORD *)(v9 + 80);
  v12 = v11 + 24;
  v13 = *(_QWORD *)(v11 + 24);
  if ( v13 == v11 + 24 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 - 8;
    if ( !v14 )
    {
LABEL_27:
      v24 = WdLogNewEntry5_WdWarning(v14, v12, v10);
      *(_QWORD *)(v24 + 24) = v4;
      v25 = *(_QWORD *)(v9 + 8);
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23, v22);
        WdLogEvent5_WdAssertion(v26);
        v25 = *(_QWORD *)(v9 + 8);
      }
      *(_QWORD *)(v24 + 32) = *(_QWORD *)(v25 + 16);
      WdLogEvent5_WdWarning(v24);
      v17 = -1071774971;
      goto LABEL_19;
    }
    do
    {
      if ( *(_DWORD *)(v14 + 24) == (_DWORD)v4 )
        break;
      v15 = *(_QWORD *)(v14 + 8);
      v14 = v15 - 8;
      if ( v15 == v12 )
        v14 = 0LL;
    }
    while ( v14 );
  }
  if ( !v14 )
    goto LABEL_27;
  if ( a4 == 5 )
    IsTargetForceable = *(_QWORD *)(v14 + 112) == 0LL;
  else
    IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable((DMMVIDEOPRESENTTARGET *)v14);
  *a3 = IsTargetForceable;
  v17 = 0;
LABEL_19:
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v12, v10);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v27 + 40));
  return v17;
}
