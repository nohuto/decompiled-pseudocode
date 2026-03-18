/*
 * XREFs of ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E8FB0 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E9540 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0124EB0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0129540 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0148D00 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0153900 (DpiPdoDispatchInternalIoctl.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C016D40C (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0234D9C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B5D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7848 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(
        DXGADAPTER *a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( a3 )
    *a3 = D3DKMDT_VOT_UNINITIALIZED;
  if ( a4 )
    *a4 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v20 + 24) = 0LL;
LABEL_19:
    WdLogEvent5_WdError(v20);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v11 = *((_QWORD *)a1 + 319);
  if ( !v11 )
  {
    v20 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, *(_QWORD *)(v11 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 80) + 72LL));
    v13 = *(_QWORD *)(v12 + 80);
    v14 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v13, v4);
    if ( v14 )
    {
      if ( a3 )
        *a3 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v14 + 80);
      if ( a4 )
        *a4 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v14 + 84);
      v18 = 0;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdError(v22);
      v18 = -1071774971;
    }
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 64), v15, v17);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v18;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}
