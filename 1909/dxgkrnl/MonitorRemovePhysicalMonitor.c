/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C02C9C5C
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01591A4 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C015B758 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdo @ 0x1C02AFF40 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C00CA06C (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6A88 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6D98 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0100818 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0145694 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C832C (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(
        char *a1,
        __int64 a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rbp
  unsigned int v19; // esi
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 v28; // [rsp+68h] [rbp+10h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v9 = (unsigned int)v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( a4 )
  {
    *((_DWORD *)a4 + 9) = v5;
    v10 = *(_QWORD *)(a1 + 276);
    *((_DWORD *)a4 + 10) = 0;
    *(_QWORD *)((char *)a4 + 52) = v10;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)a1 + 319);
  if ( !v15 || (v18 = *(_QWORD *)(v15 + 96)) == 0 )
  {
    v16 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v19 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(struct _FAST_MUTEX **)(v15 + 96), (unsigned int)v5, a3, a4);
  MONITOR_MGR::_LogMonitorPresentEvent(v18, 2LL, v5, v19, 0LL);
  v27 = -1;
  v28 = 0;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
    && !a1[2465]
    && (int)DmmIsTargetForceable((__int64)a1, (unsigned int)v5, &v28, 0) >= 0
    && !v28
    && (int)DmmGetSourceConnectedToTargetInClientVidPn((DXGADAPTER *)a1, (unsigned int)v5, &v27) >= 0 )
  {
    LOBYTE(v20) = 1;
    v21 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)a1, v27, v20);
    v25 = v21;
    if ( v21 < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
      v26[3] = v9;
      v26[4] = a1;
      v26[5] = v25;
      WdLogEvent5_WdError(v26);
    }
  }
  return v19;
}
