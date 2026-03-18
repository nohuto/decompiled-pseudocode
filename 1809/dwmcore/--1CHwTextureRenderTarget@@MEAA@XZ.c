/*
 * XREFs of ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800DB100
 * Callers:
 *     ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x1800DA340 (--_GCHwTextureRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800DA820 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 */

void __fastcall CHwTextureRenderTarget::~CHwTextureRenderTarget(CHwTextureRenderTarget *this)
{
  CD3DSurface *v2; // rcx

  *(_QWORD *)this = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 26) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 27) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 28) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 29) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v2 = (CD3DSurface *)*((_QWORD *)this + 30);
  if ( v2 )
    CD3DSurface::Release(v2);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
