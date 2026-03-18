/*
 * XREFs of DxgkQueryDmmInterface @ 0x1C00CEE90
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C9B94 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     DxgkUpdateGdiInfo @ 0x1C012AE90 (DxgkUpdateGdiInfo.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C016CFF0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0234D9C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028AF0C (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkQueryDmmInterface(DXGADAPTER *this, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  *a3 = 0LL;
  if ( !this )
  {
    v12 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v12 + 24) = 0LL;
LABEL_11:
    WdLogEvent5_WdError(v12);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *((_QWORD *)this + 319);
  if ( !v8 )
  {
    v12 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v12 + 24) = this;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( v9 )
  {
    *a3 = *(_QWORD *)(v9 + 400);
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3223192385LL;
  }
}
