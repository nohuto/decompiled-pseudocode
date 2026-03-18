/*
 * XREFs of ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C024F278
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02554D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z @ 0x1C004F4B4 (-EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C029B000 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall DpiInternal::IsAudioAvailableInEdid(DpiInternal *this, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v6; // si
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rax
  int MonitorInstance; // ebx
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int i; // ebx
  union _EDID_V1_BLOCK *EdidBlockPtr; // rax
  _QWORD *v24; // rax
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = 0;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9 = (unsigned int)v4;
  *(_QWORD *)(v7 + 24) = v4;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
  {
    MonitorInstance = -1073741811;
    goto LABEL_21;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)this + 315);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v13);
    v12 = *((_QWORD *)this + 315);
  }
  v14 = *(struct _FAST_MUTEX **)(v12 + 96);
  if ( v14 )
  {
    v25 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, v4, 1, &v25);
    if ( MonitorInstance >= 0 )
    {
      v17 = v25;
      if ( !v25 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v18);
        v20 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v20);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
      v6 = 0;
      for ( i = 1; i < 0x37; ++i )
      {
        EdidBlockPtr = (union _EDID_V1_BLOCK *)DXGMONITOR::_GetEdidBlockPtr(v17, i);
        if ( !EdidBlockPtr )
          break;
        if ( EDID_V1_CeaExt_IsAudioSupported(EdidBlockPtr) )
        {
          v6 = 1;
          break;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
      KeLeaveCriticalRegion();
      return v6;
    }
LABEL_21:
    if ( MonitorInstance < 0 )
      goto LABEL_22;
    return v6;
  }
  v15 = WdLogNewEntry5_WdError(0LL);
  *(_QWORD *)(v15 + 24) = this;
  WdLogEvent5_WdError(v15);
  MonitorInstance = -1073741811;
LABEL_22:
  v24 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v24[3] = MonitorInstance;
  v24[4] = this;
  v24[5] = v9;
  WdLogEvent5_WdError(v24);
  return 0LL;
}
