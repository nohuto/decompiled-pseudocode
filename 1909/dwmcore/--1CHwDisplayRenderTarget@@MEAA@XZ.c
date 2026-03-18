/*
 * XREFs of ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x1800DA4CC
 * Callers:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800DA43C (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::~CHwDisplayRenderTarget(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 22);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
    CMILPoolResource::Release((CMILPoolResource *)(v3 + 496));
  FastRegion::CRegion::FreeMemory((void **)this + 34);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
