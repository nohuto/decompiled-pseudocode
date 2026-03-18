/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0A9C
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00D0A04 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C014323C (MonitorAdapterPowerChange.c)
 * Callees:
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00B7AAC (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C00BB48C (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0133918 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 *v17; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 *v21; // rax
  __int64 **v22; // rcx
  __int64 **v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 *v26; // rdi
  unsigned int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  bool v35; // zf
  __int64 *v36; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v37; // [rsp+38h] [rbp-8h]
  unsigned __int8 v38; // [rsp+88h] [rbp+48h] BYREF
  __int64 v39; // [rsp+98h] [rbp+58h]

  v39 = a4;
  v4 = a4;
  if ( a2 == 1 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v29);
  }
  v37 = &v36;
  v36 = (__int64 *)&v36;
  if ( a1 == -168 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v30);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( a1 == -168 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v31);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v11 = a1 + 128;
  v12 = *(_QWORD *)(a1 + 128);
  if ( v12 != a1 + 128 )
  {
    v13 = v12 - 16;
    if ( !v12 )
      v13 = 0LL;
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = (__int64 *)(v13 + 16);
        v15 = *(_QWORD *)(v13 + 16);
        if ( v15 == v11 )
        {
          v16 = 0LL;
        }
        else
        {
          v16 = v15 - 16;
          if ( !v15 )
            v16 = 0LL;
        }
        if ( a2 == *(_DWORD *)(v13 + 432) )
        {
          if ( !a3
            || (v19 = *(_QWORD *)(a1 + 8),
                v20 = *(_DWORD *)(v13 + 44),
                v38 = 0,
                (int)DmmIsTargetInClientVidPnTopology(*(DXGADAPTER **)(v19 + 16), v20, (bool *)&v38) >= 0)
            && !v38 )
          {
            v21 = (__int64 *)*v14;
            if ( *(__int64 **)(*v14 + 8) != v14 )
              goto LABEL_39;
            v22 = *(__int64 ***)(v13 + 24);
            if ( *v22 != v14 )
              goto LABEL_39;
            *v22 = v21;
            v21[1] = (__int64)v22;
            v23 = v37;
            if ( *v37 != (__int64 *)&v36 )
              goto LABEL_39;
            *(_QWORD *)(v13 + 24) = v37;
            *v14 = (__int64)&v36;
            *v23 = v14;
            v37 = (__int64 **)(v13 + 16);
            v24 = *(_QWORD *)(v13 + 440);
            if ( v24 )
            {
              if ( *(_DWORD *)(v24 + 432) != 1 )
              {
                v32 = WdLogNewEntry5_WdAssertion(&v36);
                WdLogEvent5_WdAssertion(v32);
                v24 = *(_QWORD *)(v13 + 440);
              }
              v33 = *(_QWORD *)v11;
              v34 = (_QWORD *)(v24 + 16);
              if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
                goto LABEL_39;
              v35 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
              *v34 = v33;
              v34[1] = v11;
              *(_QWORD *)(v33 + 8) = v34;
              *(_QWORD *)v11 = v34;
              if ( !v35 || *(_QWORD *)(v13 + 80) )
                DXGMONITOR::_CreateTtmDevice(*(DXGMONITOR **)(v13 + 440), v9, 0LL, v10);
            }
            else
            {
              --*(_DWORD *)(a1 + 120);
            }
          }
        }
        v13 = v16;
        if ( !v16 )
        {
          v4 = v39;
          break;
        }
      }
    }
  }
  while ( 1 )
  {
    v17 = v36;
    if ( v36 == (__int64 *)&v36 )
      break;
    if ( (__int64 **)v36[1] != &v36 || (v25 = (__int64 *)*v36, *(__int64 **)(*v36 + 8) != v36) )
LABEL_39:
      __fastfail(3u);
    v26 = v36 - 2;
    v36 = (__int64 *)*v36;
    v25[1] = (__int64)&v36;
    if ( v17 == (__int64 *)16 )
      break;
    v27 = *((_DWORD *)v26 + 11);
    MONITOR_MGR::_IssueMonitorEvent((struct _FAST_MUTEX *)a1, v27, 0, 2LL, *((_DWORD *)v26 + 108), v4);
    v26[55] = 0LL;
    v28 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v26);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826, v27, v28, 0LL);
  }
  return 0LL;
}
