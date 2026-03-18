/*
 * XREFs of MonitorSetUsageClass @ 0x1C0291BDC
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D24C0 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B71F8 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00B7AAC (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C0133CBC (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetUsageClass(DXGADAPTER *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGMONITOR *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r15d
  char v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int TtmDevice; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  struct DXGMONITOR *v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v4 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)a1 + 315);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v11);
    v10 = *((_QWORD *)a1 + 315);
  }
  v12 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v28 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v12, v4, 1, &v28);
  if ( (_DWORD)result == -1073741275 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = v4;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225664LL;
  }
  if ( (int)result >= 0 )
  {
    v16 = v28;
    if ( !v28 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( *((_DWORD *)v16 + 108) != 1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = *((_DWORD *)v16 + 147);
    v20 = *((_BYTE *)v16 + 592);
    if ( a3 != v19 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v16 + 296), 1u);
      *((_DWORD *)v16 + 147) = a3;
      *((_BYTE *)v16 + 592) = 0;
      LODWORD(v28) = *((_DWORD *)v16 + 108);
      if ( a3 )
      {
        DXGMONITOR::_DestroyTtmDevice((void **)v16);
      }
      else
      {
        TtmDevice = DXGMONITOR::_CreateTtmDevice(v16, v21, v22, v23);
        v26 = TtmDevice;
        if ( TtmDevice < 0 )
        {
          *((_DWORD *)v16 + 147) = v19;
          *((_BYTE *)v16 + 592) = v20;
          v27 = WdLogNewEntry5_WdError(v25);
          *(_QWORD *)(v27 + 24) = v26;
          WdLogEvent5_WdError(v27);
          ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
          KeLeaveCriticalRegion();
          return (unsigned int)v26;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
      KeLeaveCriticalRegion();
      MONITOR_MGR::_IssueMonitorEvent(v12, v4, 10, (a3 != 0) + 1LL, (int)v28, v29);
    }
    return 0LL;
  }
  return result;
}
