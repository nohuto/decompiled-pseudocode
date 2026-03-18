/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3F34
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C00B3DE0 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023B0F4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B4100 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v3; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct DXGGLOBAL *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct DXGGLOBAL *v22; // rax
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h]
  unsigned __int64 v28; // [rsp+50h] [rbp-20h]
  __int64 v29; // [rsp+58h] [rbp-18h]
  int v30; // [rsp+60h] [rbp-10h]
  char v31; // [rsp+A0h] [rbp+30h] BYREF

  v3 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v26;
  LODWORD(v29) = 257;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0xFFFFFFFF00000000uLL;
  if ( a2 )
    v3 = a2;
  WORD2(v29) = 0;
  BYTE6(v29) = 0;
  v30 = 0;
  if ( a3 )
    *((_BYTE *)a3 + 48) = *((_BYTE *)v3 + 25);
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v3 + 8) |= 4u;
  LODWORD(v24) = 4;
  v25 = a3;
  BYTE4(v24) = (a1 & 2) == 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  v8 = (int)DXGGLOBAL::IterateAdaptersWithCallback(Global, DisplayConfigDestroySimulatedMonitors, &v24, 4LL);
  if ( (a1 & 1) == 0 )
  {
    v18 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v18 + 24) = a1;
    *(_QWORD *)(v18 + 32) = v8;
    WdLogEvent5_WdEvent(v18);
    return (unsigned int)v8;
  }
  *(_QWORD *)v3 = 0LL;
  *((_DWORD *)v3 + 2) = 0;
  v9 = DXGGLOBAL::GetGlobal(v7);
  v10 = DXGGLOBAL::IterateAdaptersWithCallback(v9, DisplayConfigCountMonitorsCallback, v3, 4LL);
  v8 = v10;
  if ( v10 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v19 + 24) = v8;
    WdLogEvent5_WdWarning(v19);
    return (unsigned int)v8;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 > 1u )
    {
      if ( *((_DWORD *)v3 + 2) )
        *((_DWORD *)v3 + 8) |= 2u;
      LODWORD(v24) = 5;
      BYTE4(v24) = 0;
      v25 = a3;
      v23 = DXGGLOBAL::GetGlobal(v12);
      LODWORD(v8) = DXGGLOBAL::IterateAdaptersWithCallback(v23, DisplayConfigDestroySimulatedMonitors, &v24, 4LL);
    }
    return (unsigned int)v8;
  }
  if ( *((_DWORD *)v3 + 2) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v20 + 24) = 2602LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *((_DWORD *)v3 + 8) |= 1u;
  v16 = *((unsigned int *)v3 + 5);
  if ( (_DWORD)v16 != -1 )
  {
    LOBYTE(v14) = *((_BYTE *)v3 + 29);
    v31 = 0;
    LODWORD(v8) = DisplayConfigHelperCreateSimulateMonitor(
                    (char *)v3 + 12,
                    v16,
                    5LL,
                    v14,
                    &v31,
                    a3,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30);
    if ( (int)v8 < 0 || !v31 )
    {
LABEL_19:
      if ( (a1 & 4) != 0 )
      {
        v22 = DXGGLOBAL::GetGlobal(v17);
        DXGGLOBAL::IterateAdaptersWithCallback(v22, InvalidateChildRelationsOnAdapterCallback, 0LL, 4LL);
      }
      return (unsigned int)v8;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v3 + 25) = 0;
      goto LABEL_19;
    }
    return (unsigned int)v8;
  }
  v21 = WdLogNewEntry5_WdWarning(v12, v16, v13);
  *(_QWORD *)(v21 + 24) = a1;
  WdLogEvent5_WdWarning(v21);
  return 3223191554LL;
}
