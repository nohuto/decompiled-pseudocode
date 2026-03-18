/*
 * XREFs of ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180058DE4
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180035450 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180059EF0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1801767F4 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x1801A4980 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1801A5670 (-NotifyTreeDirtyRegion@CVirtualMonitorCaptureRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegio.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z @ 0x18024F150 (-Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
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
