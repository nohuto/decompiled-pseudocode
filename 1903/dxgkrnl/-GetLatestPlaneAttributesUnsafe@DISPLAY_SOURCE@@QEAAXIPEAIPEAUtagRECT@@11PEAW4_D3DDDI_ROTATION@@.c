/*
 * XREFs of ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C01F2618
 * Callers:
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0230810 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C027F630 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C013F3A0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@1@Z @ 0x1C01F2750 (-GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6,
        enum _D3DDDI_ROTATION *a7,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *a8,
        enum D3DDDI_COLOR_SPACE_TYPE *a9,
        unsigned int *a10)
{
  unsigned int v12; // ebp
  __int64 v14; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  v12 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 520LL) != KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 9329LL;
    WdLogEvent5_WdAssertion(v14);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v12);
  if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
  {
    GetPlaneConfigState(LatestPlaneConfigInternal, a3, a4, a5, a6, a7, a8, a9, a10);
  }
  else
  {
    *a3 = 0;
    *a4 = 0LL;
    *a5 = 0LL;
    *a6 = 0LL;
    *a7 = D3DDDI_ROTATION_IDENTITY;
    *a8 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE;
    *a9 = D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
    *a10 = 0;
  }
}
