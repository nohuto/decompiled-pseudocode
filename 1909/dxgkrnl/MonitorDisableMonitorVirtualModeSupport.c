/*
 * XREFs of MonitorDisableMonitorVirtualModeSupport @ 0x1C02C9320
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3DF4 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z @ 0x1C02CE234 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorDisableMonitorVirtualModeSupport(
        DXGADAPTER ***a1,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  DXGADAPTER **v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // esi
  __int64 v21; // rax
  struct DXGMONITOR *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  DXGMONITOR *v29; // rcx
  bool v30; // zf
  struct DXGMONITOR *v31; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = a1[319];
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v13);
    v12 = a1[319];
  }
  v14 = (struct _FAST_MUTEX *)v12[12];
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, v8, v10);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v31 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v4, 1, &v31);
  v20 = result;
  if ( (_DWORD)result == -1073741275 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = v4;
    *(_QWORD *)(v21 + 32) = a1;
    WdLogEvent5_WdError(v21);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v22 = v31;
    if ( !v31 || *((_DWORD *)v31 + 108) != 1 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v23);
    }
    if ( !v22 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v24);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 296), 1u);
    if ( (*((_DWORD *)v22 + 10) & 2) != 0 )
    {
      v28 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = v4;
      *(_QWORD *)(v28 + 32) = a1;
      WdLogEvent5_WdError(v28);
      v20 = -1073741790;
    }
    else if ( DXGMONITOR::_IsVirtualModeSuportDisabled(v22) && (v30 = a3 == 0, !a3)
           || !DXGMONITOR::_IsVirtualModeSuportDisabled(v29) && (v30 = a3 == 0, a3) )
    {
      v20 = DXGMONITOR::_DisableVirtualModeSupport(v22, !v30);
      if ( v20 >= 0 )
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(a1[319], 0LL, a4);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v22 + 296));
    KeLeaveCriticalRegion();
    return (unsigned int)v20;
  }
  return result;
}
