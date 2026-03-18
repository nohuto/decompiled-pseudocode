/*
 * XREFs of ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800471F0
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800477B0 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18004724C (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800472F4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwTextureRenderTarget::UpdatePixelFormatInfo(
        CHwTextureRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DTexture *v4; // rcx
  CD3DSurface *v5; // rcx

  *((_QWORD *)this + 23) = *(_QWORD *)a2;
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 2);
  v4 = (CD3DTexture *)*((_QWORD *)this + 22);
  if ( v4 )
    CD3DTexture::UpdatePixelFormatInfo(v4, a2);
  v5 = (CD3DSurface *)*((_QWORD *)this + 17);
  if ( v5 )
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
}
