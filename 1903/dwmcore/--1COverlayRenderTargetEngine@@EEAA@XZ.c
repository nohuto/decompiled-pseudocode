/*
 * XREFs of ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x1801A43AC
 * Callers:
 *     ??_GCOverlayRenderTargetEngine@@EEAAPEAXI@Z @ 0x1801A4430 (--_GCOverlayRenderTargetEngine@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x1801A4F30 (-ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ.c)
 */

void __fastcall COverlayRenderTargetEngine::~COverlayRenderTargetEngine(COverlayRenderTargetEngine *this)
{
  CGdiSpriteBitmap *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &COverlayRenderTargetEngine::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COverlayRenderTargetEngine::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COverlayRenderTargetEngine::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  COverlayRenderTargetEngine::ReleaseRenderTarget(this);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 28);
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 27);
  if ( v2 )
    CGdiSpriteBitmap::Release(v2);
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
