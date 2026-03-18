/*
 * XREFs of ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C0282F40
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00085A0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00F8190 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C013F6AC (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C01F3E78 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        const struct DXGALLOCATION **a3,
        enum _D3DDDIFORMAT *a4,
        int a5,
        unsigned int a6)
{
  DISPLAY_SOURCE *v10; // rsi
  __int64 v11; // rdx
  __int64 i; // rdi
  D3DKMT_MULTIPLANE_OVERLAY3 *v13; // r11
  __int64 LayerIndex; // rdx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r11
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // r8
  struct tagRECT *p_DstRect; // r9
  struct tagRECT *p_SrcRect; // r8
  struct tagRECT v20; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v21[16]; // [rsp+88h] [rbp+27h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v21,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL) + 504LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v10 = (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL) + 112LL)
                         + 3968LL * a2->VidPnSourceId);
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(v10);
  for ( i = 0LL; (unsigned int)i < a2->PresentPlaneCount; i = (unsigned int)(i + 1) )
  {
    v13 = a2->ppPresentPlanes[i];
    LayerIndex = v13->LayerIndex;
    if ( (v13->InputFlags.Value & 1) != 0 )
    {
      pPlaneAttributes = v13->pPlaneAttributes;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        v10,
        LayerIndex,
        a3[LayerIndex],
        1u,
        pPlaneAttributes->Flags,
        &pPlaneAttributes->SrcRect,
        &pPlaneAttributes->DstRect,
        &pPlaneAttributes->ClipRect,
        pPlaneAttributes->Rotation,
        pPlaneAttributes->Blend,
        pPlaneAttributes->ColorSpace,
        pPlaneAttributes->SDRWhiteLevel,
        a4[LayerIndex],
        0);
    }
    else
    {
      *(_QWORD *)&v20.left = 0LL;
      *(_QWORD *)&v20.right = 0LL;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        v10,
        LayerIndex,
        0LL,
        0,
        0,
        &v20,
        &v20,
        &v20,
        D3DDDI_ROTATION_IDENTITY,
        D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
        D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
        0,
        D3DDDIFMT_UNKNOWN,
        0);
    }
  }
  pPostComposition = a2->pPostComposition;
  if ( pPostComposition )
  {
    p_DstRect = &pPostComposition->DstRect;
    LOBYTE(v11) = 1;
    p_SrcRect = &pPostComposition->SrcRect;
  }
  else
  {
    p_DstRect = &v20;
    *(_QWORD *)&v20.left = 0LL;
    p_SrcRect = &v20;
    *(_QWORD *)&v20.right = 0LL;
    v11 = 0LL;
  }
  DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(v10, v11, p_SrcRect, p_DstRect);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  if ( a5 > -1 )
    DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), a2->VidPnSourceId, a3[a5], a6, 0);
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return 0LL;
}
