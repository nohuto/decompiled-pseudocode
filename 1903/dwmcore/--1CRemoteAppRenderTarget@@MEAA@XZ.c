/*
 * XREFs of ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801A55A8
 * Callers:
 *     ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x1801A5640 (--_ECRemoteAppRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

void __fastcall CRemoteAppRenderTarget::~CRemoteAppRenderTarget(CRemoteAppRenderTarget *this)
{
  CGdiSpriteBitmap *v2; // rcx

  *(_QWORD *)this = &CRemoteAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 22);
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 21);
  if ( v2 )
    CGdiSpriteBitmap::Release(v2);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
