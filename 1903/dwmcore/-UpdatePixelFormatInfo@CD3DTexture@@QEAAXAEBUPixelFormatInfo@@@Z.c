/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18004724C
 * Callers:
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800471F0 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800472F4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CD3DTexture::UpdatePixelFormatInfo(CD3DTexture *this, const struct PixelFormatInfo *a2)
{
  int v2; // ebp
  int v4; // ecx
  bool v6; // zf
  __int64 v7; // rdi
  CD3DSurface *v8; // rcx

  v2 = *((_DWORD *)this + 44);
  v4 = *((_DWORD *)a2 + 1);
  v6 = *((_QWORD *)this + 24) == 0LL;
  *((_DWORD *)this + 44) = v4;
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
  if ( !v6 )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 46) )
    {
      do
      {
        v8 = *(CD3DSurface **)(*((_QWORD *)this + 24) + 8 * v7);
        if ( v8 )
          CD3DSurface::UpdatePixelFormatInfo(v8, a2);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 46) );
      v4 = *((_DWORD *)this + 44);
    }
  }
  if ( v2 != v4 )
  {
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 28);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 29);
  }
}
