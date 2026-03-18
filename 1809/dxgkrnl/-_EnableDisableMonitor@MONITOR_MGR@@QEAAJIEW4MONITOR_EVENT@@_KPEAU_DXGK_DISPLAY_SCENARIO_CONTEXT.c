/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B66B4
 * Callers:
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B43B8 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4FC0 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableMonitor @ 0x1C0143D04 (MonitorEnableDisableMonitor.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B6898 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144168 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // edi
  char v17; // al
  char v18; // dl
  unsigned __int8 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // r13
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 i; // rcx
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ebp
  __int64 v32; // rax
  SIZE_T v33; // rax
  __int64 v34; // rcx
  unsigned int *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 j; // rax
  int v40; // eax
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned int *v46; // rbx
  __int64 v47; // r15
  __int64 v48; // rbp
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // r12
  _QWORD *v52; // rax
  _QWORD v53[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 8;
  if ( a4 != 8 && a4 != 2 )
    return 3221225485LL;
  memset(v53, 0, sizeof(v53));
  v13 = *(_BYTE *)(a1 + 1) & 1;
  v14 = 2 * (*(_BYTE *)(a1 + 2) & 1);
  HIDWORD(v53[0]) = a4;
  v53[1] = a5;
  v15 = v53[0] & 0xFFFFFFF0 | a3 & 1 | (2 * (*(_BYTE *)a1 & 1 | (2 * (v13 | v14))));
  if ( a2 != -1 )
  {
    LOBYTE(v12) = a3;
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, v12, a4, a5, a6);
  }
  if ( a4 != 8 && a4 != 2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( a5 >= 2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v25);
  }
  v16 = 0;
  if ( a4 == 8 )
  {
    *(_BYTE *)(a1 + 1) = a3 == 0;
    v17 = *(_BYTE *)(a1 + 2);
  }
  else
  {
    v17 = a3 == 0;
    *(_BYTE *)(a1 + 2) = a3 == 0;
  }
  v18 = *(_BYTE *)(a1 + 1);
  if ( v18 || (v17 = *(_BYTE *)(a1 + 2), v19 = 1, v17) )
    v19 = 0;
  LODWORD(v53[0]) = v15 & 0xFFFFFF8F | (16 * (v19 | (2 * (v18 & 1 | (2 * (v17 & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL, 0LL, v53);
  v22 = 0;
  if ( *(_BYTE *)(a1 + 2) && *(_BYTE *)(a1 + 1) )
  {
    if ( a1 == -168 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v26);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
    for ( i = *(_QWORD *)(a1 + 128); i != a1 + 128; i = *(_QWORD *)(v29 + 16) )
    {
      v29 = i - 16;
      if ( !i )
        v29 = 0LL;
      if ( !v29 )
        break;
      if ( *(_DWORD *)(v29 + 588) )
      {
        i = *(unsigned int *)(v29 + 40);
        if ( (i & 0x20) != 0 || (i &= 6u, v28 = (_BYTE)i == 6, LOBYTE(i) = 0, v28) )
          LOBYTE(i) = 1;
        if ( !(_BYTE)i )
        {
          v22 = 1;
          break;
        }
      }
    }
    if ( a1 == -168 )
    {
      v30 = WdLogNewEntry5_WdAssertion(i);
      WdLogEvent5_WdAssertion(v30);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  }
  if ( v19 != *(_BYTE *)a1 || v22 )
  {
    LOBYTE(v21) = v19;
    if ( a4 != 8 )
      v6 = 2;
    v16 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v21, v6, v19 ^ 1LL, a6);
    *(_BYTE *)a1 = v19;
    return v16;
  }
  if ( !a3 || v19 || !*(_BYTE *)(a1 + 1) )
    return v16;
  v31 = 0;
  if ( a1 == -168 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v32);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v33 = 4LL * *(unsigned int *)(a1 + 120);
  if ( !is_mul_ok(*(unsigned int *)(a1 + 120), 4uLL) )
    v33 = -1LL;
  v35 = (unsigned int *)operator new(v33, 0x4D677844u, PagedPool);
  if ( v35 )
  {
    for ( j = *(_QWORD *)(a1 + 128); j != a1 + 128; j = *(_QWORD *)(v42 + 16) )
    {
      v42 = j - 16;
      if ( !j )
        v42 = 0LL;
      if ( !v42 )
        break;
      if ( *(_DWORD *)(v42 + 588) )
      {
        v40 = *(_DWORD *)(v42 + 40);
        if ( (v40 & 0x20) != 0 || (v28 = (v40 & 6) == 6, v41 = 0, v28) )
          v41 = 1;
        if ( v41 )
        {
          v34 = v31++;
          v35[v34] = *(_DWORD *)(v42 + 44);
        }
      }
    }
    if ( a1 == -168 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v43);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
    if ( v31 )
    {
      v46 = v35;
      v47 = v31;
      do
      {
        v48 = *v46;
        if ( (_DWORD)v48 == -1 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v44);
          WdLogEvent5_WdAssertion(v49);
        }
        LOBYTE(v45) = 1;
        v50 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v48, v45, 2LL, 0LL, a6);
        v51 = v50;
        if ( v50 < 0 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdError(v44);
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
    operator delete[](v35);
    return v16;
  }
  v36 = WdLogNewEntry5_WdError(v34);
  WdLogEvent5_WdError(v36);
  if ( a1 == -168 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v37);
    WdLogEvent5_WdAssertion(v38);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  return 3221225495LL;
}
