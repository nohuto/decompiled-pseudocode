/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D1D08
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C00D1E80 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026E72C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026F434 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026F8C4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C00D1E38 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026DE58 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v8; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct DXGGLOBAL *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGGLOBAL *v27; // rax
  struct DXGGLOBAL *v28; // rax
  __int64 v29; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+38h] [rbp-38h]
  __int64 v31; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+48h] [rbp-28h]
  unsigned __int64 v33; // [rsp+50h] [rbp-20h]
  __int64 v34; // [rsp+58h] [rbp-18h]
  int v35; // [rsp+60h] [rbp-10h]
  char v36; // [rsp+B8h] [rbp+48h] BYREF

  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
    return 0LL;
  v8 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v31;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0xFFFFFFFF00000000uLL;
  if ( a2 )
    v8 = a2;
  LODWORD(v34) = 257;
  WORD2(v34) = 0;
  BYTE6(v34) = 0;
  v35 = 0;
  if ( a3 )
    *((_BYTE *)a3 + 48) = *((_BYTE *)v8 + 25);
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v8 + 8) |= 4u;
  LODWORD(v29) = 4;
  v30 = a3;
  BYTE4(v29) = (a1 & 2) == 0;
  *(_WORD *)((char *)&v29 + 5) = 0;
  HIBYTE(v29) = 0;
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v12 = (int)DXGGLOBAL::IterateAdaptersWithCallback(Global, DisplayConfigDestroySimulatedMonitors, &v29, 4LL);
  if ( (a1 & 1) == 0 )
  {
    v20 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v20 + 24) = a1;
    *(_QWORD *)(v20 + 32) = v12;
    WdLogEvent5_WdEvent(v20);
    return (unsigned int)v12;
  }
  *(_QWORD *)v8 = 0LL;
  *((_DWORD *)v8 + 2) = 0;
  v13 = DXGGLOBAL::GetGlobal(v11, v10);
  v14 = DXGGLOBAL::IterateAdaptersWithCallback(v13, DisplayConfigCountMonitorsCallback, v8, 4LL);
  v12 = v14;
  if ( v14 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v21 + 24) = v12;
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v12;
  }
  if ( *(_DWORD *)v8 )
  {
    if ( *(_DWORD *)v8 > 1u )
    {
      if ( *((_DWORD *)v8 + 2) )
        *((_DWORD *)v8 + 8) |= 2u;
      v29 = 5LL;
      v30 = a3;
      v28 = DXGGLOBAL::GetGlobal(v16, v15);
      LODWORD(v12) = DXGGLOBAL::IterateAdaptersWithCallback(v28, DisplayConfigDestroySimulatedMonitors, &v29, 4LL);
    }
    return (unsigned int)v12;
  }
  if ( *((_DWORD *)v8 + 2) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v22 + 24) = 2631LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *((_DWORD *)v8 + 8) |= 1u;
  v23 = *((unsigned int *)v8 + 5);
  if ( (_DWORD)v23 != -1 )
  {
    LOBYTE(v18) = *((_BYTE *)v8 + 29);
    v36 = 0;
    LODWORD(v12) = DisplayConfigHelperCreateSimulateMonitor(
                     (char *)v8 + 12,
                     v23,
                     5LL,
                     v18,
                     &v36,
                     a3,
                     v29,
                     v30,
                     v31,
                     v32,
                     v33,
                     v34,
                     v35);
    if ( (int)v12 < 0 || !v36 )
    {
LABEL_24:
      if ( (a1 & 4) != 0 )
      {
        v27 = DXGGLOBAL::GetGlobal(v26, v25);
        DXGGLOBAL::IterateAdaptersWithCallback(v27, InvalidateChildRelationsOnAdapterCallback, 0LL, 4LL);
      }
      return (unsigned int)v12;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v8 + 25) = 0;
      goto LABEL_24;
    }
    return (unsigned int)v12;
  }
  v24 = WdLogNewEntry5_WdWarning(v16, v23, v17);
  *(_QWORD *)(v24 + 24) = a1;
  WdLogEvent5_WdWarning(v24);
  return 3223191554LL;
}
