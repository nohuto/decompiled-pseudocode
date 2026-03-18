/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C0176448
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0157898 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C0157A0C (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00C912C (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6238 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00FBB48 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0128508 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01739E4 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175F04 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        char *a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  ADAPTER_DISPLAY **v16; // r15
  unsigned int PhysicalMonitor; // eax
  unsigned int v18; // r12d
  struct DXGMONITOR *v19; // r14
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  _QWORD *v30; // rax
  _OWORD v31[2]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGMONITOR *v32; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 v33; // [rsp+98h] [rbp+48h] BYREF

  v7 = (unsigned int)a2;
  v10 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v10 + 24) = v7;
  *(_QWORD *)(v10 + 32) = a1;
  if ( !a1 || !a3 || (_DWORD)v7 == -1 )
    return 3221225485LL;
  v11 = a6;
  if ( a6 )
  {
    *((_DWORD *)a6 + 9) = v7;
    *(_QWORD *)((char *)v11 + 52) = *(_QWORD *)(a1 + 276);
    *((_DWORD *)v11 + 10) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v22);
  }
  v15 = *((_QWORD *)a1 + 319);
  if ( !v15 || (v16 = *(ADAPTER_DISPLAY ***)(v15 + 96)) == 0LL )
  {
    v23 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  PhysicalMonitor = MONITOR_MGR::_HandleCreatePhysicalMonitor(v16, (unsigned int)v7, a3, a4, a5, v11);
  v32 = 0LL;
  v18 = PhysicalMonitor;
  memset(v31, 0, sizeof(v31));
  if ( (int)MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)v16, (unsigned int)v7, 1, &v32) >= 0 )
  {
    v19 = v32;
    if ( v32 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 296), 1u);
      DXGMONITOR::_GetMonitorDiagInfo(v19, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v31, v20);
      ExReleaseResourceLite((PERESOURCE)((char *)v19 + 296));
      KeLeaveCriticalRegion();
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v16, 1LL, v7, v18, v31);
  LODWORD(v32) = -1;
  v33 = 0;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
    && !a1[2465]
    && (int)DmmIsTargetForceable((__int64)a1, (unsigned int)v7, &v33, 0) >= 0
    && !v33
    && (int)DmmGetSourceConnectedToTargetInClientVidPn((DXGADAPTER *)a1, (unsigned int)v7, (unsigned int *)&v32) >= 0 )
  {
    LOBYTE(v24) = 1;
    v25 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)a1, (unsigned int)v32, v24);
    v29 = v25;
    if ( v25 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
      v30[3] = v7;
      v30[4] = a1;
      v30[5] = v29;
      WdLogEvent5_WdError(v30);
    }
  }
  return v18;
}
