/*
 * XREFs of MonitorGetDpiInfoFromDescriptor @ 0x1C00C58D4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00B98C8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00C3480 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00030C4 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0003174 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0050A84 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetPreferredMode@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0050B54 (-DisplayID_GetPreferredMode@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00C4598 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetDpiInfoFromDescriptor(
        DXGADAPTER *this,
        __int64 a2,
        struct DISPLAY_PREFERRED_MODE_INFO *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  MONITOR_MGR *v14; // rcx
  __int64 v15; // rcx
  DXGMONITOR *v16; // rdi
  unsigned __int8 *EdidBaseBlockPtr; // rax
  __int64 v18; // rcx
  unsigned __int8 *v19; // rsi
  bool v20; // al
  int PhysicalSize; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  DXGMONITOR *v29; // [rsp+40h] [rbp+8h] BYREF

  v7 = (unsigned int)a2;
  v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11 = 0;
  *(_QWORD *)(v10 + 24) = v7;
  *(_QWORD *)(v10 + 32) = this;
  if ( !this || (_DWORD)v7 == -1 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v23);
  }
  v13 = *((_QWORD *)this + 315);
  if ( !v13 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v24);
    v13 = *((_QWORD *)this + 315);
  }
  v14 = *(MONITOR_MGR **)(v13 + 96);
  if ( !v14 )
  {
    v25 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v29 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v14, v7, 0, &v29) < 0 )
    return 3221225485LL;
  v16 = v29;
  if ( !v29 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v26);
    v28 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v28);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
  EdidBaseBlockPtr = (unsigned __int8 *)DXGMONITOR::_GetEdidBaseBlockPtr(v16);
  v19 = EdidBaseBlockPtr;
  if ( EdidBaseBlockPtr )
  {
    EDID_V1_GetPhysicalSize(v18, EdidBaseBlockPtr, a4, a5);
    v20 = (int)EDID_V1_GetPreferredMode(v19, a3) >= 0;
  }
  else
  {
    if ( *((_BYTE *)v16 + 184) )
    {
      PhysicalSize = DisplayID_GetPhysicalSize((DXGMONITOR *)((char *)v16 + 168), a4, a5);
      if ( PhysicalSize >= 0 )
        PhysicalSize = DisplayID_GetPreferredMode((DXGMONITOR *)((char *)v16 + 168), a3);
    }
    else
    {
      PhysicalSize = -1073741637;
    }
    v11 = PhysicalSize;
    v20 = PhysicalSize >= 0;
  }
  *a6 = v20;
  ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
  KeLeaveCriticalRegion();
  return v11;
}
