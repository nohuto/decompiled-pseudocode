/*
 * XREFs of MonitorSetUsageClass @ 0x1C02CA8C8
 * Callers:
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C74 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015CA0C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C015E68C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02CE1F4 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetUsageClass(DXGADAPTER *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct DXGMONITOR *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // r15d
  char v24; // r13
  __int64 v25; // rdx
  int TtmDevice; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rax
  struct DXGMONITOR *v32; // [rsp+70h] [rbp+8h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h]

  v33 = a4;
  v4 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)a1 + 319);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v13);
    v12 = *((_QWORD *)a1 + 319);
  }
  v14 = *(struct _FAST_MUTEX **)(v12 + 96);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v32 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v4, 1, &v32);
  if ( (_DWORD)result == -1073741275 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = v4;
    *(_QWORD *)(v19 + 32) = a1;
    WdLogEvent5_WdError(v19);
    return 3221225664LL;
  }
  if ( (int)result >= 0 )
  {
    v20 = v32;
    if ( !v32 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_DWORD *)v20 + 108) != 1 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = *((_DWORD *)v20 + 148);
    v24 = *((_BYTE *)v20 + 596);
    if ( a3 != v23 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v20 + 296), 1u);
      *((_DWORD *)v20 + 148) = a3;
      *((_BYTE *)v20 + 596) = 0;
      LODWORD(v32) = *((_DWORD *)v20 + 108);
      if ( a3 )
      {
        DXGMONITOR::_DestroyTtmDevice(v20);
      }
      else
      {
        TtmDevice = DXGMONITOR::_CreateTtmDevice(v20, v25);
        v30 = TtmDevice;
        if ( TtmDevice < 0 )
        {
          *((_DWORD *)v20 + 148) = v23;
          *((_BYTE *)v20 + 596) = v24;
          v31 = WdLogNewEntry5_WdError(v28, v27, v29);
          *(_QWORD *)(v31 + 24) = v30;
          WdLogEvent5_WdError(v31);
          ExReleaseResourceLite((PERESOURCE)((char *)v20 + 296));
          KeLeaveCriticalRegion();
          return (unsigned int)v30;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v20 + 296));
      KeLeaveCriticalRegion();
      MONITOR_MGR::_IssueMonitorEvent(v14, (unsigned int)v4, 10, (a3 != 0) + 1LL, (int)v32, v33);
    }
    return 0LL;
  }
  return result;
}
