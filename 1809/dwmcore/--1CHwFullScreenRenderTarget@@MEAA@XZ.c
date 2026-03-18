/*
 * XREFs of ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800EA710
 * Callers:
 *     ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800EA6D0 (--_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x180203704 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1802037C0 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x18022C250 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rdi

  *(_QWORD *)this = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 26) = &CHwFullScreenRenderTarget::`vftable';
  v2 = *((_QWORD *)this + 71);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 72);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (void *)*((_QWORD *)this + 69);
  if ( v4 )
  {
    CComputeScribbleRenderer::~CComputeScribbleRenderer(*((CComputeScribbleRenderer **)this + 69));
    operator delete(v4, 0x40uLL);
  }
  FastRegion::CRegion::FreeMemory((void **)this + 60);
  FastRegion::CRegion::FreeMemory((void **)this + 51);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
