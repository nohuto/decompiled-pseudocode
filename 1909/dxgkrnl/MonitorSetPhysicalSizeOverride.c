/*
 * XREFs of MonitorSetPhysicalSizeOverride @ 0x1C02CA4EC
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234BF4 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorSetPhysicalSizeOverride(DXGADAPTER *this, __int64 a2, int a3, int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGMONITOR *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DXGMONITOR *v24; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v12 = *((_QWORD *)this + 319);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v13);
    v12 = *((_QWORD *)this + 319);
  }
  v14 = *(struct _FAST_MUTEX **)(v12 + 96);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, v9, v11);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v24 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v5, 0, &v24) < 0 )
    return 3221225485LL;
  v19 = v24;
  if ( !v24 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v20);
    v23 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v23);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v19 + 296), 1u);
  *((_DWORD *)v19 + 189) = a3;
  *((_DWORD *)v19 + 190) = a4;
  ExReleaseResourceLite((PERESOURCE)((char *)v19 + 296));
  KeLeaveCriticalRegion();
  return 0LL;
}
