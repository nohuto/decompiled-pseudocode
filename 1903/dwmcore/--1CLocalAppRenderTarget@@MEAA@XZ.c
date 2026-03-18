/*
 * XREFs of ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x1802500E4
 * Callers:
 *     ??_ECLocalAppRenderTarget@@MEAAPEAXI@Z @ 0x180250150 (--_ECLocalAppRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CLocalAppRenderTarget::~CLocalAppRenderTarget(CLocalAppRenderTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CLocalAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CLocalAppRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CLocalAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 22);
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    CMILPoolResource::Release((CMILPoolResource *)(v2 + 496));
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
