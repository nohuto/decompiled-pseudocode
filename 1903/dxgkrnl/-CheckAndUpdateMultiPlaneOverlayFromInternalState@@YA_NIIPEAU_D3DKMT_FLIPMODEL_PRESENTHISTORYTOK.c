/*
 * XREFs of ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C027F630
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C0111970 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00F8190 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C013F3A0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C01F0204 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01F0268 (-ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C01F2618 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C01F3E78 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C01F3F30 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C01F4038 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022C438 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 */

char __fastcall CheckAndUpdateMultiPlaneOverlayFromInternalState(
        __int64 a1,
        __int64 a2,
        struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        char a4,
        struct ADAPTER_RENDER *a5,
        struct ADAPTER_DISPLAY *a6,
        struct tagRECT *a7)
{
  struct ADAPTER_DISPLAY *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // di
  const struct DXGALLOCATION *v17; // r15
  const struct tagRECT *v18; // r14
  RECT SourceRect; // xmm0
  enum D3DDDI_COLOR_SPACE_TYPE ColorSpace; // eax
  const struct tagRECT *v21; // r8
  __int64 v22; // rdx
  __int64 v24; // rax
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v25; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v26[36]; // [rsp+88h] [rbp-51h] BYREF
  int v27; // [rsp+128h] [rbp+4Fh] BYREF
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v28; // [rsp+138h] [rbp+5Fh]
  char v29; // [rsp+140h] [rbp+67h]

  v29 = a4;
  v28 = a3;
  v7 = a6;
  v8 = (unsigned int)a1;
  v9 = (unsigned int)a2;
  v10 = *((_QWORD *)a6 + 14) + 3968LL * (unsigned int)a1;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v10 + 8) + 520LL) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 9276LL;
    WdLogEvent5_WdAssertion(v11);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v10, v9);
  if ( LatestPlaneConfigInternal
    && (v14 = *((unsigned int *)LatestPlaneConfigInternal + 2), v16 = 1, (v14 & 1) != 0)
    && (v17 = *(const struct DXGALLOCATION **)LatestPlaneConfigInternal) != 0LL )
  {
    memset(v26, 0, 0x58uLL);
    DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
      (DISPLAY_SOURCE *)v10,
      (unsigned int)v9,
      v26,
      (struct tagRECT *)&v26[1],
      (struct tagRECT *)&v26[5],
      (struct tagRECT *)&v26[9],
      (enum _D3DDDI_ROTATION *)&v26[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)&v26[14],
      (enum D3DDDI_COLOR_SPACE_TYPE *)&v26[18],
      &v26[20]);
    v18 = a7;
    SourceRect = v28->SourceRect;
    ColorSpace = v28->ColorSpace;
    LODWORD(a6) = ColorSpace;
    *(RECT *)&v26[1] = SourceRect;
    v26[18] = ColorSpace;
    if ( v29 )
    {
      *(RECT *)&v26[5] = SourceRect;
      v21 = a7;
      *(RECT *)&v26[9] = SourceRect;
      *a7 = *(struct tagRECT *)(v10 + 652);
      DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe((DISPLAY_SOURCE *)v10, (const struct tagRECT *)&v26[1], v21);
      ColorSpace = (int)a6;
    }
    DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
      (DISPLAY_SOURCE *)v10,
      (unsigned int)v9,
      v17,
      v26[0],
      (const struct tagRECT *)&v26[1],
      (const struct tagRECT *)&v26[5],
      (const struct tagRECT *)&v26[9],
      (enum _D3DDDI_ROTATION)v26[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v26[14],
      ColorSpace,
      v26[20]);
    v27 = 0;
    v25.0 = 0;
    CheckMultiPlaneOverlayInternal3(v8, a5, v7, &v27, &v25);
    DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v10, (unsigned int)v9);
    if ( !v27 )
      return 0;
    DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
      (DISPLAY_SOURCE *)v10,
      (unsigned int)v9,
      v17,
      1u,
      v26[0],
      (const struct tagRECT *)&v26[1],
      (const struct tagRECT *)&v26[5],
      (const struct tagRECT *)&v26[9],
      (enum _D3DDDI_ROTATION)v26[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v26[14],
      (enum D3DDDI_COLOR_SPACE_TYPE)a6,
      v26[20],
      D3DDDIFMT_FORCE_UINT|0x80000000,
      1u);
    if ( v29 )
    {
      DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe((DISPLAY_SOURCE *)v10);
      LOBYTE(v22) = 1;
      DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v10, v22, (const struct tagRECT *)&v26[1], v18);
    }
    return v16;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v24 + 24) = v8;
    *(_QWORD *)(v24 + 32) = v9;
    WdLogEvent5_WdError(v24);
    return 0;
  }
}
