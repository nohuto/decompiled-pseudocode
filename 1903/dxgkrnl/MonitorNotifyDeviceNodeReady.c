/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C0176214
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C0145440 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0157898 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0056140 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0128508 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01739E4 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173C00 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02CED98 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PERESOURCE v12; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  DXGMONITOR *v18; // rdi
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // esi
  struct DXGMONITOR *v24; // rdi
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  DXGMONITOR *v35; // [rsp+30h] [rbp-69h] BYREF
  struct DXGMONITOR *v36; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v37[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v38[10]; // [rsp+60h] [rbp-39h] BYREF

  v3 = a2;
  memset(v38, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v38[1]);
  v38[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v38[3]) = 8;
  LOBYTE(v38[6]) = -1;
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = v3;
  *(_QWORD *)(v8 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v27);
  }
  v12 = this[319];
  if ( !v12 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v28);
    v12 = this[319];
  }
  SpinLock = (struct _FAST_MUTEX *)v12->SpinLock;
  if ( !SpinLock )
  {
    v29 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v35 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, 0, &v35);
  v18 = v35;
  v19 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v35 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v19 == -1073741275 )
      goto LABEL_27;
    v32 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v32);
  }
  else
  {
    if ( !v35 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v30);
    }
    if ( *((_DWORD *)v18 + 108) == 1 )
    {
      AttachedPhysicalMonitor = v18;
      v18 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v18, v16);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 7) != a3 )
  {
LABEL_27:
    v34 = WdLogNewEntry5_WdDmmEvent(v17, v16);
    *(_QWORD *)(v34 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v34);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
  v20 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v38);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
  KeLeaveCriticalRegion();
  if ( v20 >= 0 && v18 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v18 + 296), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
    DXGMONITOR::_CopyMonitorInformation(v18, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
    KeLeaveCriticalRegion();
  }
  v36 = 0LL;
  memset(v37, 0, sizeof(v37));
  v23 = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, 1, &v36);
  if ( v23 >= 0 )
  {
    v24 = v36;
    if ( !v36 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v22, v21);
      WdLogEvent5_WdAssertion(v33);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 296), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v24, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v37, v25);
    ExReleaseResourceLite((PERESOURCE)((char *)v24 + 296));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7LL, v3, v23, v37);
  return (unsigned int)v23;
}
