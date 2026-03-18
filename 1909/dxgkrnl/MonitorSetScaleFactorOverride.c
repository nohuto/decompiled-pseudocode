/*
 * XREFs of MonitorSetScaleFactorOverride @ 0x1C02CA774
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234BF4 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorSetScaleFactorOverride(DXGADAPTER *this, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v10 = *((_QWORD *)this + 319);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v11);
    v10 = *((_QWORD *)this + 319);
  }
  v12 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL, v7, v9);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v22 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v4, 0, &v22) < 0 )
    return 3221225485LL;
  v17 = v22;
  if ( !v22 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v18);
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v17 + 296), 1u);
  *((_DWORD *)v17 + 147) = a3;
  ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
  KeLeaveCriticalRegion();
  return 0LL;
}
