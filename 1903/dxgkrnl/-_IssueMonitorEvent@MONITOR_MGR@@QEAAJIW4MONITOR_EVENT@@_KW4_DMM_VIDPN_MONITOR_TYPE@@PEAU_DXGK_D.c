/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158B4C
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01252F0 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0155EE8 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FB9C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175F04 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017606C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7E90 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C826C (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8444 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetUsageClass @ 0x1C02CA808 (MonitorSetUsageClass.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C016FDB4 (DxgkIncreaseMonitorUniqueness.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  LIST_ENTRY *Flink; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const GUID *v15; // r9
  int v16; // eax
  GUID *p_ActivityId; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]

  v7 = a3;
  v24 = a2;
  v28 = a4;
  if ( !a3 || a3 == 7 )
  {
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( dword_1C00A1888 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000080uLL) )
      {
        v33 = 4LL;
        v32 = &v24;
        v29 = *(_QWORD *)(*((_QWORD *)a1->Owner + 2) + 276LL);
        v34 = &v29;
        v36 = &v25;
        v38 = &v28;
        v40 = &v26;
        v35 = 8LL;
        v25 = v7;
        v37 = 4LL;
        v39 = 8LL;
        v26 = a5;
        v41 = 4LL;
        if ( a6 )
          v16 = *(unsigned __int8 *)(a6 + 48);
        else
          v16 = -1;
        v27 = v16;
        v42 = &v27;
        v43 = 4LL;
        p_ActivityId = (GUID *)(a6 + 8);
        if ( !a6 )
          p_ActivityId = &ActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0074824, p_ActivityId, v15, 8u, &pData);
      }
    }
  }
  if ( !(_DWORD)v7 )
  {
LABEL_7:
    DxgkIncreaseMonitorUniqueness();
    goto LABEL_8;
  }
  if ( (int)v7 <= 0 )
    goto LABEL_35;
  if ( (int)v7 > 2 )
  {
    if ( (int)v7 > 7 )
    {
      if ( (int)v7 <= 9 )
        goto LABEL_8;
      if ( (_DWORD)v7 != 10 )
      {
LABEL_35:
        v18 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v18 + 24) = 10311LL;
        WdLogEvent5_WdAssertion(v18);
        goto LABEL_8;
      }
    }
    goto LABEL_7;
  }
LABEL_8:
  if ( (unsigned int)v7 > 3 && (unsigned int)(v7 - 7) > 3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  KeAcquireGuardedMutex(a1 + 4);
  Flink = a1[2].Event.Header.WaitListHead.Flink;
  if ( Flink == &a1[2].Event.Header.WaitListHead )
    Flink = 0LL;
  while ( 1 )
  {
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v23 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v23);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !Flink )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, int, __int64))Flink[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           v24,
           Flink[1].Blink,
           (unsigned int)v7,
           v28,
           a5,
           a6) < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v21[3] = Flink[1].Flink;
      v21[4] = Flink[1].Blink;
      v21[5] = v7;
      v21[6] = v24;
      WdLogEvent5_WdError(v21);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v22);
    }
    KeAcquireGuardedMutex(a1 + 4);
    Flink = Flink->Flink;
    if ( Flink == &a1[2].Event.Header.WaitListHead )
      Flink = 0LL;
  }
  return 0LL;
}
