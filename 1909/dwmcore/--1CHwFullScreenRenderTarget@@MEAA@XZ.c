/*
 * XREFs of ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800DA43C
 * Callers:
 *     ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800DA400 (--_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x18015E290 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18015E360 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801ABBD0 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rdi

  *(_QWORD *)this = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 12) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 18) = &CHwFullScreenRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 63);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 64);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (void *)*((_QWORD *)this + 61);
  if ( v4 )
  {
    CComputeScribbleRenderer::~CComputeScribbleRenderer(*((CComputeScribbleRenderer **)this + 61));
    operator delete(v4);
  }
  FastRegion::CRegion::FreeMemory((void **)this + 52);
  FastRegion::CRegion::FreeMemory((void **)this + 43);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
