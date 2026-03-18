/*
 * XREFs of ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800B42E4
 * Callers:
 *     ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x1800B2280 (--_GCHwTextureRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800B420C (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwTextureRenderTarget::~CHwTextureRenderTarget(CHwTextureRenderTarget *this)
{
  CMILPoolResource *v2; // rcx

  *(_QWORD *)this = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 12) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 18) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 19) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 20) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 21) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v2 = (CMILPoolResource *)*((_QWORD *)this + 22);
  if ( v2 )
    CMILPoolResource::Release(v2);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
