/*
 * XREFs of MonitorGetEdidBaseBlockPtr @ 0x1C02C9588
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B5D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00E7720 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

const void *__fastcall MonitorGetEdidBaseBlockPtr(DXGADAPTER *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DXGMONITOR *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  const void *EdidBaseBlockPtr; // rax
  struct _ERESOURCE *v22; // rcx
  const void *v23; // rbx
  DXGMONITOR *v24; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  if ( !this || (_DWORD)v2 == -1 )
    return 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)this + 319);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v10);
    v9 = *((_QWORD *)this + 319);
  }
  v11 = *(struct _FAST_MUTEX **)(v9 + 96);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdError(0LL, v5, v7);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 0LL;
  }
  v24 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, (unsigned int)v2, 0, &v24) < 0 )
    return 0LL;
  v16 = v24;
  if ( !v24 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15, v14);
    WdLogEvent5_WdAssertion(v17);
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v20);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v16);
  v22 = (struct _ERESOURCE *)((char *)v16 + 296);
  v23 = EdidBaseBlockPtr;
  ExReleaseResourceLite(v22);
  KeLeaveCriticalRegion();
  return v23;
}
