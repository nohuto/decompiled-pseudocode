/*
 * XREFs of ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1800B1EC0
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800B1818 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x18015C0A8 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@0@Z @ 0x180166500 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPoin.c)
 *     ?CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ @ 0x18023F810 (-CopyFrontToBackBuffer@CHwCompSwapChainTarget@@UEAAJXZ.c)
 * Callees:
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x1800B1F34 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021BE8C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CD3DDeviceLevel1::CopySurfaceRect(
        CD3DDeviceLevel1 *this,
        struct CD3DSurface *a2,
        const struct tagRECT *a3,
        struct CD3DSurface *a4,
        const struct tagPOINT *a5,
        bool a6)
{
  CD3DDeviceLevel1::CopySubresourceRectInternal1(
    this,
    *((struct ID3D11Resource **)a2 + 16),
    *((_DWORD *)a2 + 34),
    a3,
    *((struct ID3D11Resource **)a4 + 16),
    *((_DWORD *)a4 + 34),
    a5,
    4 * a6);
  if ( g_LockAndReadCopyOfTexture )
  {
    DebugInspectTexture(*((struct ID3D11Texture2D **)a4 + 16), 0);
    DebugInspectTexture(*((struct ID3D11Texture2D **)a2 + 16), 0);
  }
}
