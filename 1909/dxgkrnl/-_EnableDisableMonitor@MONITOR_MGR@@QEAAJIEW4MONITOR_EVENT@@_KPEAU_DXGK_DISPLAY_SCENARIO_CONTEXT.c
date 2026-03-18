/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145494
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145370 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableMonitor @ 0x1C01597E4 (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7908 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0145694 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0159DA8 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(__int64 a1, __int64 a2, char a3, int a4, unsigned __int64 a5)
{
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  int v12; // r12d
  char v13; // dl
  char v14; // al
  unsigned __int8 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 i; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // rax
  SIZE_T v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 j; // rax
  int v40; // eax
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int *v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rbp
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // r12
  _QWORD *v52; // rax
  _DWORD v53[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+38h] [rbp-40h]
  __int128 v55; // [rsp+40h] [rbp-38h]

  v8 = 2LL;
  if ( a4 != 8 && a4 != 2 )
    return 3221225485LL;
  v9 = *(unsigned __int8 *)(a1 + 2);
  v10 = 0;
  v11 = *(_BYTE *)(a1 + 1) & 1;
  v53[1] = a4;
  v54 = a5;
  v12 = a3 & 1 | (2 * (*(_BYTE *)a1 & 1 | (2 * (v11 | (2 * (v9 & 1))))));
  v55 = 0LL;
  if ( (_DWORD)a2 != -1 )
  {
    LOBYTE(v8) = a3;
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, v8);
  }
  if ( a5 > 1 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, a2);
    WdLogEvent5_WdAssertion(v21);
    LOBYTE(v9) = *(_BYTE *)(a1 + 2);
  }
  if ( a4 == 8 )
  {
    *(_BYTE *)(a1 + 1) = a3 == 0;
  }
  else
  {
    *(_BYTE *)(a1 + 2) = a3 == 0;
    LOBYTE(v9) = a3 == 0;
  }
  v13 = *(_BYTE *)(a1 + 1);
  if ( v13 || (v14 = *(_BYTE *)(a1 + 2), (LOBYTE(v9) = v14) != 0) )
  {
    v15 = 0;
    v14 = v9;
  }
  else
  {
    v15 = 1;
  }
  v53[0] = v12 & 0xFFFFFF8F | (16 * (v15 | (2 * (v13 & 1 | (2 * (v14 & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL, 0LL, v53);
  v19 = 0;
  if ( *(_BYTE *)(a1 + 2) && *(_BYTE *)(a1 + 1) )
  {
    if ( a1 == -168 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v22);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
    v23 = a1 + 128;
    for ( i = *(_QWORD *)(a1 + 128); i != v23; i = *(_QWORD *)(v26 + 16) )
    {
      v26 = i - 16;
      if ( !i )
        v26 = 0LL;
      if ( !v26 )
        break;
      if ( *(_DWORD *)(v26 + 592) )
      {
        i = *(unsigned int *)(v26 + 40);
        if ( (i & 0x20) != 0 || (i &= 6u, v25 = (_BYTE)i == 6, LOBYTE(i) = 0, v25) )
          LOBYTE(i) = 1;
        if ( !(_BYTE)i )
        {
          v19 = 1;
          break;
        }
      }
    }
    if ( a1 == -168 )
    {
      v27 = WdLogNewEntry5_WdAssertion(i, v23);
      WdLogEvent5_WdAssertion(v27);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  }
  if ( v15 != *(_BYTE *)a1 || v19 )
  {
    LOBYTE(v18) = v15;
    v10 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v18);
    *(_BYTE *)a1 = v15;
    return v10;
  }
  if ( !a3 || v15 || !*(_BYTE *)(a1 + 1) )
    return v10;
  v28 = 0;
  if ( a1 == -168 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v29);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v30 = 4LL * *(unsigned int *)(a1 + 120);
  if ( !is_mul_ok(*(unsigned int *)(a1 + 120), 4uLL) )
    v30 = -1LL;
  v34 = (unsigned int *)operator new[](v30, 0x4D677844u, PagedPool);
  if ( v34 )
  {
    for ( j = *(_QWORD *)(a1 + 128); j != a1 + 128; j = *(_QWORD *)(v31 + 16) )
    {
      v31 = j - 16;
      if ( !j )
        v31 = 0LL;
      if ( !v31 )
        break;
      if ( *(_DWORD *)(v31 + 592) )
      {
        v40 = *(_DWORD *)(v31 + 40);
        if ( (v40 & 0x20) != 0 || (v25 = (v40 & 6) == 6, v41 = 0, v25) )
          v41 = 1;
        if ( v41 )
        {
          v32 = v28++;
          v34[v32] = *(_DWORD *)(v31 + 44);
        }
      }
    }
    if ( a1 == -168 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v42);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
    if ( v28 )
    {
      v46 = v34;
      v47 = v28;
      do
      {
        v48 = *v46;
        if ( (_DWORD)v48 == -1 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v44, v43);
          WdLogEvent5_WdAssertion(v49);
        }
        LOBYTE(v45) = 1;
        v50 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v48, v45);
        v51 = v50;
        if ( v50 < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
          v52[3] = v48;
          v52[4] = a1;
          v52[5] = v51;
          WdLogEvent5_WdError(v52);
        }
        ++v46;
        --v47;
      }
      while ( v47 );
    }
    operator delete[](v34);
    return v10;
  }
  v35 = WdLogNewEntry5_WdError(v32, v31, v33);
  WdLogEvent5_WdError(v35);
  if ( a1 == -168 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37, v36);
    WdLogEvent5_WdAssertion(v38);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  return 3221225495LL;
}
