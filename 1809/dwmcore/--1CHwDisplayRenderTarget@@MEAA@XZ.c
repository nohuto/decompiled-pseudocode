/*
 * XREFs of ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1800EA7A4
 * Callers:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800EA710 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::~CHwDisplayRenderTarget(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 27);
  if ( v3 )
    CD3DSurface::Release((CD3DSurface *)(v3 + 496));
  FastRegion::CRegion::FreeMemory((void **)this + 42);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
