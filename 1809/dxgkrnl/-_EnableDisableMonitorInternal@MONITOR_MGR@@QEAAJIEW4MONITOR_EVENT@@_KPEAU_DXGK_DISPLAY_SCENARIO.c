/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144168
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B66B4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C004EF48 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        unsigned int a2,
        char a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  char v10; // di
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  DXGMONITOR *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // [rsp+78h] [rbp+20h]

  v6 = a2;
  v25 = 0;
  v10 = 0;
  if ( (unsigned int)(a4 - 1) > 1 && a4 != 8 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a1 == -168 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v19);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v12 = *(_QWORD *)(a1 + 128);
  if ( v12 != a1 + 128 )
  {
    v13 = v12 - 16;
    if ( !v12 )
      v13 = 0LL;
    if ( v13 )
    {
      do
      {
        if ( (_DWORD)v6 == -1 || *(_DWORD *)(v13 + 44) == (_DWORD)v6 )
        {
          v25 = 1;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 296), 1u);
          if ( a4 == 1 )
          {
            DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v13, a3);
          }
          else if ( a4 != 8 || *(_DWORD *)(v13 + 588) != 1 || a3 )
          {
            *(_DWORD *)(v13 + 40) = *(_DWORD *)(v13 + 40) & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
          }
          ExReleaseResourceLite((PERESOURCE)(v13 + 296));
          KeLeaveCriticalRegion();
          if ( *(_DWORD *)(v13 + 432) != 1 )
          {
            v14 = *(_QWORD *)(v13 + 440);
            if ( v14 )
            {
              if ( *(_DWORD *)(v14 + 432) != 1 )
              {
                v20 = WdLogNewEntry5_WdAssertion(v11);
                WdLogEvent5_WdAssertion(v20);
                v14 = *(_QWORD *)(v13 + 440);
              }
              if ( !v14 )
              {
                v21 = WdLogNewEntry5_WdAssertion(v11);
                WdLogEvent5_WdAssertion(v21);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 296), 1u);
              v22 = *(DXGMONITOR **)(v13 + 440);
              if ( a4 == 1 )
                DXGMONITOR::_ChangeLIDStatus(v22, a3);
              else
                *((_DWORD *)v22 + 10) = *((_DWORD *)v22 + 10) & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
              ExReleaseResourceLite((PERESOURCE)(v14 + 296));
              KeLeaveCriticalRegion();
            }
          }
        }
        v15 = *(_QWORD *)(v13 + 16);
        if ( v15 == a1 + 128 )
          break;
        v13 = v15 - 16;
        if ( !v15 )
          v13 = 0LL;
      }
      while ( v13 );
      v10 = v25;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( a1 == -168 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v23);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( v10 || (_DWORD)v6 == -1 || a4 == 2 || a4 == 8 )
  {
    MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)a1, v6, a4, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, (a3 != 0) + 9, v6, 0, 0LL);
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v24 + 24) = v6;
    *(_QWORD *)(v24 + 32) = a1;
    WdLogEvent5_WdError(v24);
  }
  return 0LL;
}
