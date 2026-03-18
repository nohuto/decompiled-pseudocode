/*
 * XREFs of ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0230E80
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022D250 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C01F2C88 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 */

bool __fastcall DXGDEVICE::UseCachedIndependentFlipParameters(
        DXGDEVICE *this,
        struct DISPLAY_SOURCE *a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a3)
{
  __int64 v6; // r10
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rcx
  int v9; // [rsp+80h] [rbp-80h] BYREF
  int v10; // [rsp+84h] [rbp-7Ch] BYREF
  int v11; // [rsp+88h] [rbp-78h] BYREF
  int v12; // [rsp+8Ch] [rbp-74h] BYREF
  int v13; // [rsp+90h] [rbp-70h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v15; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+9Ch] [rbp-64h] BYREF
  enum _D3DDDI_ROTATION v17; // [rsp+A0h] [rbp-60h] BYREF
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v18; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v19; // [rsp+A8h] [rbp-58h] BYREF
  enum D3DDDI_COLOR_SPACE_TYPE v20; // [rsp+ACh] [rbp-54h] BYREF
  struct tagRECT v21; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v22; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v23; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v24[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v25[40]; // [rsp+E8h] [rbp-18h] BYREF

  if ( !*(_QWORD *)&a3->CompSurfaceLuid )
    return 0;
  v9 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  memset(v25, 0, 0x24uLL);
  v6 = *((_QWORD *)this + 2);
  VidPnSourceId = a3->VidPnSourceId;
  (*(void (__fastcall **)(_QWORD, D3DDDI_VIDEO_PRESENT_SOURCE_ID *, LUID *, __int64, _BYTE *, int *, int *, unsigned int *, _BYTE *, int *, int *, int *, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 520) + 8LL) + 408LL))(
    *(_QWORD *)(v6 + 528),
    &VidPnSourceId,
    &a3->CompSurfaceLuid,
    -1LL,
    v25,
    &v9,
    &v13,
    &v15,
    v24,
    &v12,
    &v11,
    &v10,
    0LL,
    0LL);
  if ( !v9 )
    return 0;
  if ( v15 != a3->LayerIndex )
    return 0;
  *(_QWORD *)&v23.left = 0LL;
  *(_QWORD *)&v23.right = 0LL;
  *(_QWORD *)&v21.left = 0LL;
  *(_QWORD *)&v21.right = 0LL;
  *(_QWORD *)&v22.left = 0LL;
  *(_QWORD *)&v22.right = 0LL;
  DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(a2, v15, &v16, &v23, &v21, &v22, &v17, &v18, &v20, &v19);
  pPlaneAttributes = a3->pPlaneAttributes;
  if ( v16 != pPlaneAttributes->Flags )
    return 0;
  return v21.left == pPlaneAttributes->DstRect.left
      && v21.right == pPlaneAttributes->DstRect.right
      && v21.top == pPlaneAttributes->DstRect.top
      && v21.bottom == pPlaneAttributes->DstRect.bottom
      && v17 == pPlaneAttributes->Rotation
      && v18 == pPlaneAttributes->Blend
      && v22.left == pPlaneAttributes->ClipRect.left
      && v22.right == pPlaneAttributes->ClipRect.right
      && v22.top == pPlaneAttributes->ClipRect.top
      && v22.bottom == pPlaneAttributes->ClipRect.bottom
      && v19 == pPlaneAttributes->SDRWhiteLevel
      && (v20 != pPlaneAttributes->ColorSpace
       || v23.left != pPlaneAttributes->SrcRect.left
       || v23.right != pPlaneAttributes->SrcRect.right
       || v23.top != pPlaneAttributes->SrcRect.top
       || v23.bottom != pPlaneAttributes->SrcRect.bottom);
}
