/*
 * XREFs of ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0249A20
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FBC8C (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00DEC74 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0122D40 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C01C0C80 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01C0CE4 (-ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C01C333C (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C01C4F74 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C01C502C (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C01C5134 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC17C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 */

char __fastcall CheckAndUpdateMultiPlaneOverlayFromInternalState(
        __int64 a1,
        unsigned int a2,
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
  __int64 v13; // rcx
  char v14; // di
  const struct DXGALLOCATION *v15; // r15
  const struct tagRECT *v16; // r14
  RECT SourceRect; // xmm0
  enum D3DDDI_COLOR_SPACE_TYPE ColorSpace; // eax
  const struct tagRECT *v19; // r8
  __int64 v21; // rax
  D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v22; // [rsp+78h] [rbp-61h] BYREF
  unsigned int v23[36]; // [rsp+88h] [rbp-51h] BYREF
  int v24; // [rsp+128h] [rbp+4Fh] BYREF
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v25; // [rsp+138h] [rbp+5Fh]
  char v26; // [rsp+140h] [rbp+67h]

  v26 = a4;
  v25 = a3;
  v7 = a6;
  v8 = (unsigned int)a1;
  v9 = a2;
  v10 = *((_QWORD *)a6 + 14) + 3760LL * (unsigned int)a1;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v10 + 8) + 408LL) != KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v11 + 24) = 8826LL;
    WdLogEvent5_WdAssertion(v11);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v10, v9);
  if ( LatestPlaneConfigInternal
    && (v13 = *((unsigned int *)LatestPlaneConfigInternal + 2), v14 = 1, (v13 & 1) != 0)
    && (v15 = *(const struct DXGALLOCATION **)LatestPlaneConfigInternal) != 0LL )
  {
    memset(v23, 0, 0x58uLL);
    DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
      (DISPLAY_SOURCE *)v10,
      v9,
      v23,
      (struct tagRECT *)&v23[1],
      (struct tagRECT *)&v23[5],
      (struct tagRECT *)&v23[9],
      (enum _D3DDDI_ROTATION *)&v23[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)&v23[14],
      (enum D3DDDI_COLOR_SPACE_TYPE *)&v23[18],
      &v23[20]);
    v16 = a7;
    SourceRect = v25->SourceRect;
    ColorSpace = v25->ColorSpace;
    LODWORD(a6) = ColorSpace;
    *(RECT *)&v23[1] = SourceRect;
    v23[18] = ColorSpace;
    if ( v26 )
    {
      *(RECT *)&v23[5] = SourceRect;
      v19 = a7;
      *(RECT *)&v23[9] = SourceRect;
      *a7 = *(struct tagRECT *)(v10 + 652);
      DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe((DISPLAY_SOURCE *)v10, (const struct tagRECT *)&v23[1], v19);
      ColorSpace = (int)a6;
    }
    DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
      (DISPLAY_SOURCE *)v10,
      v9,
      v15,
      v23[0],
      (const struct tagRECT *)&v23[1],
      (const struct tagRECT *)&v23[5],
      (const struct tagRECT *)&v23[9],
      (enum _D3DDDI_ROTATION)v23[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v23[14],
      ColorSpace,
      v23[20]);
    v24 = 0;
    v22.0 = 0;
    CheckMultiPlaneOverlayInternal3(v8, a5, v7, &v24, &v22);
    DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v10, v9);
    if ( !v24 )
      return 0;
    DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
      (DISPLAY_SOURCE *)v10,
      v9,
      v15,
      1u,
      v23[0],
      (const struct tagRECT *)&v23[1],
      (const struct tagRECT *)&v23[5],
      (const struct tagRECT *)&v23[9],
      (enum _D3DDDI_ROTATION)v23[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v23[14],
      (enum D3DDDI_COLOR_SPACE_TYPE)a6,
      v23[20],
      D3DDDIFMT_FORCE_UINT|0x80000000,
      1u);
    if ( v26 )
    {
      DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe((DISPLAY_SOURCE *)v10);
      DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v10, 1, (const struct tagRECT *)&v23[1], v16);
    }
    return v14;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 24) = v8;
    *(_QWORD *)(v21 + 32) = v9;
    WdLogEvent5_WdError(v21);
    return 0;
  }
}
