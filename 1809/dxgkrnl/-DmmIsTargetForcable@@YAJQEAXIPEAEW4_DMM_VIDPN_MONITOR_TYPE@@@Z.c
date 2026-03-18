/*
 * XREFs of ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00E23D0
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1C00B39B0 (DxgkHandleForceProjectionMonitor.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B4100 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C00B659C (MonitorCreateSimulatedMonitor.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E2150 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146FCC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C028BBB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00E24A4 (-IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetForcable(DXGADAPTER *a1, unsigned int a2, unsigned __int8 *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  DMMVIDEOPRESENTTARGET *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 IsTargetForcable; // al
  unsigned int v17; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  *a3 = 0;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_16:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v20);
  }
  v9 = *((_QWORD *)a1 + 315);
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, v10);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
    v11 = *(_QWORD *)(v10 + 80);
    v12 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v11, v4);
    if ( v12 )
    {
      if ( a4 == 5 )
        IsTargetForcable = *((_QWORD *)v12 + 14) == 0LL;
      else
        IsTargetForcable = DMMVIDEOPRESENTTARGET::IsTargetForcable(v12);
      *a3 = IsTargetForcable;
      v17 = 0;
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v23 + 24) = v4;
      v24 = *(_QWORD *)(v10 + 8);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v25);
        v24 = *(_QWORD *)(v10 + 8);
      }
      *(_QWORD *)(v23 + 32) = *(_QWORD *)(v24 + 16);
      WdLogEvent5_WdWarning(v23);
      v17 = -1071774971;
    }
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
    return v17;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
