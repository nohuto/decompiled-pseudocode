/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C028FDA4
 * Callers:
 *     DpiPdoAddPdo @ 0x1C027449C (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02760FC (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0297514 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        DXGADAPTER *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v6; // r15
  __int64 v7; // rsi
  __int64 v10; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  DXGADAPTER ***v17; // rbp
  unsigned int PhysicalMonitor; // eax
  unsigned int v19; // r14d
  struct DXGMONITOR *v20; // rdi
  _OWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  struct DXGMONITOR *v22; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  v7 = (unsigned int)a2;
  v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v10 + 24) = v7;
  *(_QWORD *)(v10 + 32) = this;
  if ( !this || !a3 || (_DWORD)v7 == -1 )
    return 3221225485LL;
  v11 = a6;
  if ( a6 )
  {
    *((_DWORD *)a6 + 9) = v7;
    *(_QWORD *)((char *)v11 + 52) = *(_QWORD *)((char *)this + 276);
    *((_DWORD *)v11 + 10) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 315);
  if ( !v14 || (v17 = *(DXGADAPTER ****)(v14 + 96)) == 0LL )
  {
    v15 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  PhysicalMonitor = MONITOR_MGR::_HandleCreatePhysicalMonitor(v17, v7, a3, v6, a5, v11);
  v22 = 0LL;
  v19 = PhysicalMonitor;
  memset(v21, 0, sizeof(v21));
  if ( (int)MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)v17, v7, 1, &v22) >= 0 )
  {
    v20 = v22;
    if ( v22 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
      DXGMONITOR::_GetMonitorDiagInfo(v20, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v21);
      ExReleaseResourceLite((PERESOURCE)((char *)v20 + 296));
      KeLeaveCriticalRegion();
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v17, 1, v7, v19, v21);
  return v19;
}
