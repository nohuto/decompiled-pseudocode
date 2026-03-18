/*
 * XREFs of DxgkQueryDmmInterface @ 0x1C00CF110
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00B9710 (DxgkUpdateGdiInfo.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D4904 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020345C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0254DF0 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkQueryDmmInterface(DXGADAPTER *this, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  *a3 = 0LL;
  if ( !this )
  {
    v10 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v10 + 24) = 0LL;
LABEL_11:
    WdLogEvent5_WdError(v10);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *((_QWORD *)this + 315);
  if ( !v6 )
  {
    v10 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v10 + 24) = this;
    goto LABEL_11;
  }
  v7 = *(_QWORD *)(v6 + 88);
  if ( v7 )
  {
    *a3 = *(_QWORD *)(v7 + 400);
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3223192385LL;
  }
}
