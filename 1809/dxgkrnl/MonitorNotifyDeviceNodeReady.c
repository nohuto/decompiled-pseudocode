/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C0290E80
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C0274F20 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02760FC (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0004F08 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0297514 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029878C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C029A63C (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  PERESOURCE v13; // rax
  __int64 v14; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  __int64 v16; // rax
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  DXGMONITOR *v24; // rdi
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ebx
  __int64 v30; // rcx
  int v31; // esi
  struct DXGMONITOR *v32; // rdi
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
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v3;
  *(_QWORD *)(v10 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = this[315];
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
    v13 = this[315];
  }
  SpinLock = (struct _FAST_MUTEX *)v13->SpinLock;
  if ( !SpinLock )
  {
    v16 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v35 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 0, &v35);
  v24 = v35;
  v25 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v35 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v27);
    }
    if ( v25 == -1073741275 )
      goto LABEL_27;
    v28 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v28);
  }
  else
  {
    if ( !v35 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( *((_DWORD *)v24 + 108) == 1 )
    {
      AttachedPhysicalMonitor = v24;
      v24 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v24);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 7) != a3 )
  {
LABEL_27:
    v34 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
    *(_QWORD *)(v34 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v34);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
  v29 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v38);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
  KeLeaveCriticalRegion();
  if ( v29 >= 0 && v24 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v24 + 296), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
    DXGMONITOR::_CopyMonitorInformation(v24, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v24 + 296));
    KeLeaveCriticalRegion();
  }
  v36 = 0LL;
  memset(v37, 0, sizeof(v37));
  v31 = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 1, &v36);
  if ( v31 >= 0 )
  {
    v32 = v36;
    if ( !v36 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v33);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v32 + 296), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v32, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v37);
    ExReleaseResourceLite((PERESOURCE)((char *)v32 + 296));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7, v3, v31, v37);
  return (unsigned int)v31;
}
