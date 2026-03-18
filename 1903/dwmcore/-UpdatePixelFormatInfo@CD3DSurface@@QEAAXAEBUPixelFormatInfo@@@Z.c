/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800472F4
 * Callers:
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800471F0 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18004724C (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800B1818 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800B25D4 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x1800E5CC0 (-UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180166CD0 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwCompSwapChainTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180240680 (-UpdatePixelFormatInfo@CHwCompSwapChainTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DSurface::UpdatePixelFormatInfo(CD3DSurface *this, const struct PixelFormatInfo *a2)
{
  int v2; // r8d
  int v3; // r9d

  v2 = *((_DWORD *)a2 + 1);
  v3 = *((_DWORD *)this + 46);
  *((_DWORD *)this + 46) = v2;
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 2);
  if ( v3 != v2 )
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 27);
}
