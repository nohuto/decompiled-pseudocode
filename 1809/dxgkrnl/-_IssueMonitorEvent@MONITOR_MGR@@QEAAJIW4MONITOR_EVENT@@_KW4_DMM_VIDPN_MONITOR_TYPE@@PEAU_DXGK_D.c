/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B69D4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D0A9C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0144168 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028E8D0 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028EAC0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F32C (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F504 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetUsageClass @ 0x1C0291BDC (MonitorSetUsageClass.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0298900 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C00B74EC (DxgkIncreaseMonitorUniqueness.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(
        struct _FAST_MUTEX *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v7; // rdi
  const GUID *v8; // r9
  int v9; // eax
  GUID *p_ActivityId; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  LIST_ENTRY *Flink; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int64 *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  __int64 *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]

  v7 = a3;
  v20 = a2;
  v24 = a4;
  if ( !a3 || a3 == 7 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( dword_1C008D838 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000080uLL) )
      {
        v29 = 4LL;
        v28 = &v20;
        v25 = *(_QWORD *)(*((_QWORD *)a1->Owner + 2) + 276LL);
        v30 = &v25;
        v32 = &v21;
        v34 = &v24;
        v36 = &v22;
        v31 = 8LL;
        v21 = v7;
        v33 = 4LL;
        v35 = 8LL;
        v22 = a5;
        v37 = 4LL;
        if ( a6 )
          v9 = *(unsigned __int8 *)(a6 + 48);
        else
          v9 = -1;
        v23 = v9;
        v38 = &v23;
        v39 = 4LL;
        p_ActivityId = (GUID *)(a6 + 8);
        if ( !a6 )
          p_ActivityId = &ActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006BBC6, p_ActivityId, v8, 8u, &pData);
      }
    }
  }
  if ( (_DWORD)v7 )
  {
    if ( (int)v7 <= 0 )
    {
LABEL_18:
      v11 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v11 + 24) = 9896LL;
      WdLogEvent5_WdAssertion(v11);
      goto LABEL_20;
    }
    if ( (int)v7 <= 2 )
      goto LABEL_20;
    if ( (int)v7 > 7 )
    {
      if ( (int)v7 <= 9 )
        goto LABEL_20;
      if ( (_DWORD)v7 != 10 )
      {
        if ( (_DWORD)v7 == 11 )
          goto LABEL_20;
        goto LABEL_18;
      }
    }
  }
  DxgkIncreaseMonitorUniqueness();
LABEL_20:
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  KeAcquireGuardedMutex(a1 + 4);
  Flink = a1[2].Event.Header.WaitListHead.Flink;
  if ( Flink == &a1[2].Event.Header.WaitListHead )
    Flink = 0LL;
  while ( 1 )
  {
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v18 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v18);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !Flink )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, int, __int64))Flink[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           v20,
           Flink[1].Blink,
           (unsigned int)v7,
           v24,
           a5,
           a6) < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v16[3] = Flink[1].Flink;
      v16[4] = Flink[1].Blink;
      v16[5] = v7;
      v16[6] = v20;
      WdLogEvent5_WdError(v16);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v17);
    }
    KeAcquireGuardedMutex(a1 + 4);
    Flink = Flink->Flink;
    if ( Flink == &a1[2].Event.Header.WaitListHead )
      Flink = 0LL;
  }
  return 0LL;
}
