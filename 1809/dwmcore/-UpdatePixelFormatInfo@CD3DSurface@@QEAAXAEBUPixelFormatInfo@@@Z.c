/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180093A54
 * Callers:
 *     ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x18007B490 (-UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1800909E8 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180093974 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwCompSwapChainTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180201380 (-UpdatePixelFormatInfo@CHwCompSwapChainTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1802075F0 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
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
