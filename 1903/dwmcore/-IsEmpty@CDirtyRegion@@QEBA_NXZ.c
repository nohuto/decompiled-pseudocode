/*
 * XREFs of ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18004C408
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18006E5A0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180177F64 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A4F80 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x1801A6240 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801A6F30 (-NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegio.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180246070 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z @ 0x1802508C0 (-Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

bool __fastcall CDirtyRegion::IsEmpty(CDirtyRegion *this)
{
  char v1; // r10
  CDirtyRegion *v2; // r8
  int v3; // edx
  unsigned int v5; // r9d
  int v6; // r9d

  v1 = 0;
  v2 = this;
  if ( *((_BYTE *)this + 2883) )
  {
LABEL_5:
    LOBYTE(v3) = v1;
    return v3;
  }
  if ( !*((_BYTE *)this + 2886) )
  {
    v5 = 0;
    while ( IsEmpty((const struct D2D_RECT_F *)((char *)v2 + 16 * v5 + 24)) )
    {
      v5 = v3 + v6;
      if ( v5 >= 8 )
        return v3;
    }
    goto LABEL_5;
  }
  LOBYTE(v3) = *((_DWORD *)this + 319) == 0;
  return v3;
}
