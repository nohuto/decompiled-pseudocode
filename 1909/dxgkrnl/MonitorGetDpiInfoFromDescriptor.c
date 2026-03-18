/*
 * XREFs of MonitorGetDpiInfoFromDescriptor @ 0x1C01291C0
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C00ECB40 (DxgkGetMonitorInternalInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000D41C (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000D4C8 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0057414 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetPreferredMode@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00574E4 (-DisplayID_GetPreferredMode@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C00ED380 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall MonitorGetDpiInfoFromDescriptor(
        DXGADAPTER *this,
        __int64 a2,
        struct DISPLAY_PREFERRED_MODE_INFO *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6,
        _BYTE *a7)
{
  __int64 v8; // rdi
  __int64 v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  struct _FAST_MUTEX *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGMONITOR *v20; // rbx
  unsigned __int8 *EdidBaseBlockPtr; // rax
  __int64 v22; // rcx
  unsigned __int8 *v23; // rdi
  int PreferredMode; // eax
  int PhysicalSize; // edi
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct DXGMONITOR *v36; // [rsp+50h] [rbp+8h] BYREF

  v8 = (unsigned int)a2;
  v11 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = this;
  if ( !this )
    return 3221225485LL;
  if ( (_DWORD)v8 == -1 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v12 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v29);
  }
  v16 = *((_QWORD *)this + 319);
  if ( !v16 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v30);
    v16 = *((_QWORD *)this + 319);
  }
  v17 = *(struct _FAST_MUTEX **)(v16 + 96);
  if ( !v17 )
  {
    v31 = WdLogNewEntry5_WdError(0LL, v13, v15);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
  v36 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v17, (unsigned int)v8, 0, &v36) < 0 )
    return 3221225485LL;
  v20 = v36;
  if ( !v36 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v32);
    v35 = WdLogNewEntry5_WdAssertion(v34, v33);
    WdLogEvent5_WdAssertion(v35);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
  EdidBaseBlockPtr = (unsigned __int8 *)DXGMONITOR::_GetEdidBaseBlockPtr(v20);
  v22 = (__int64)a7;
  v23 = EdidBaseBlockPtr;
  if ( EdidBaseBlockPtr )
  {
    if ( a7 )
      *a7 = 1;
    EDID_V1_GetPhysicalSize(v22, EdidBaseBlockPtr, a4, v12);
    PreferredMode = EDID_V1_GetPreferredMode(v23, a3);
  }
  else
  {
    if ( a7 )
      *a7 = *((_BYTE *)v20 + 184);
    if ( !*((_BYTE *)v20 + 184) )
    {
      PhysicalSize = -1073741637;
      goto LABEL_19;
    }
    PhysicalSize = DisplayID_GetPhysicalSize((struct DXGMONITOR *)((char *)v20 + 168), a4, v12);
    if ( PhysicalSize < 0 )
      goto LABEL_19;
    PreferredMode = DisplayID_GetPreferredMode((struct DXGMONITOR *)((char *)v20 + 168), a3);
  }
  PhysicalSize = PreferredMode;
LABEL_19:
  *a6 = PhysicalSize >= 0;
  v26 = *((_DWORD *)v20 + 189);
  v27 = *((_DWORD *)v20 + 190);
  if ( v26 )
  {
    if ( v27 )
    {
      *a4 = v26;
      PhysicalSize = 0;
      *v12 = v27;
    }
  }
  ExReleaseResourceLite((PERESOURCE)((char *)v20 + 296));
  KeLeaveCriticalRegion();
  return (unsigned int)PhysicalSize;
}
