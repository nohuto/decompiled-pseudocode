/*
 * XREFs of ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C0284FA8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B9E8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z @ 0x1C00565F8 (-EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C014CD98 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall DpiInternal::IsAudioAvailableInEdid(DpiInternal *this, void *a2)
{
  __int64 v2; // rdi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _FAST_MUTEX *v16; // rcx
  __int64 v17; // rax
  int MonitorInstance; // edi
  struct DXGMONITOR *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int i; // edi
  union _EDID_V1_BLOCK *EdidBlockPtr; // rax
  _QWORD *v27; // rax
  struct DXGMONITOR *v28; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned int)a2;
  v4 = 0;
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  v9 = (unsigned int)v2;
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)(v5 + 32) = this;
  if ( !this || (_DWORD)v2 == -1 )
  {
    MonitorInstance = -1073741811;
    goto LABEL_21;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 319);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v15);
    v14 = *((_QWORD *)this + 319);
  }
  v16 = *(struct _FAST_MUTEX **)(v14 + 96);
  if ( v16 )
  {
    v28 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v16, (unsigned int)v2, 1, &v28);
    if ( MonitorInstance >= 0 )
    {
      v19 = v28;
      if ( !v28 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v20);
        v23 = WdLogNewEntry5_WdAssertion(v22, v21);
        WdLogEvent5_WdAssertion(v23);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 296), 1u);
      for ( i = 1; i < 0x37; ++i )
      {
        EdidBlockPtr = (union _EDID_V1_BLOCK *)DXGMONITOR::_GetEdidBlockPtr(v19, i);
        if ( !EdidBlockPtr )
          break;
        if ( EDID_V1_CeaExt_IsAudioSupported(EdidBlockPtr) )
        {
          v4 = 1;
          break;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v19 + 296));
      KeLeaveCriticalRegion();
      return v4;
    }
LABEL_21:
    if ( MonitorInstance < 0 )
      goto LABEL_22;
    return v4;
  }
  v17 = WdLogNewEntry5_WdError(0LL, v10, v12);
  *(_QWORD *)(v17 + 24) = this;
  WdLogEvent5_WdError(v17);
  MonitorInstance = -1073741811;
LABEL_22:
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
  v27[3] = MonitorInstance;
  v27[4] = this;
  v27[5] = v9;
  WdLogEvent5_WdError(v27);
  return 0LL;
}
