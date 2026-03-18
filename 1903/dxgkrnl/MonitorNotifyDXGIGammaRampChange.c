/*
 * XREFs of MonitorNotifyDXGIGammaRampChange @ 0x1C02C9918
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0123B0C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02017A0 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C02331C0 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C02D0848 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorNotifyDXGIGammaRampChange(DXGADAPTER *a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  struct _FAST_MUTEX *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int MonitorInstance; // ebx
  __int64 v16; // rax
  struct DXGMONITOR *v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a1 + 319);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v9);
    v8 = *((_QWORD *)a1 + 319);
  }
  v10 = *(struct _FAST_MUTEX **)(v8 + 96);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  v17 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v10, (unsigned int)v2, 1, &v17);
  if ( MonitorInstance >= 0 )
  {
    DXGMONITOR::_NotifyDXGIGammaRampChange(v17);
  }
  else
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v14, v13);
    *(_QWORD *)(v16 + 24) = v2;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogEvent5_WdDmmEvent(v16);
  }
  return (unsigned int)MonitorInstance;
}
