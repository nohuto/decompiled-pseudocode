/*
 * XREFs of MonitorGetEdidBaseBlockPtr @ 0x1C02906D8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02554D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00C4598 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

const void *__fastcall MonitorGetEdidBaseBlockPtr(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rcx
  DXGMONITOR *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  const void *EdidBaseBlockPtr; // rax
  struct _ERESOURCE *v20; // rcx
  const void *v21; // rbx
  DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
    return 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 315);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v10);
    v9 = *((_QWORD *)this + 315);
  }
  v11 = *(struct _FAST_MUTEX **)(v9 + 96);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 0LL;
  }
  v22 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, v4, 0, &v22) < 0 )
    return 0LL;
  v15 = v22;
  if ( !v22 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v16);
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v15);
  v20 = (struct _ERESOURCE *)((char *)v15 + 296);
  v21 = EdidBaseBlockPtr;
  ExReleaseResourceLite(v20);
  KeLeaveCriticalRegion();
  return v21;
}
