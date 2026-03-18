/*
 * XREFs of ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x18015F364
 * Callers:
 *     ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x18015F3E0 (--_ECRemoteAppRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRemoteAppRenderTarget::~CRemoteAppRenderTarget(CRemoteAppRenderTarget *this)
{
  __int64 v2; // rcx
  CGdiSpriteBitmap *v3; // rcx

  *(_QWORD *)this = &CRemoteAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v2 = *((_QWORD *)this + 22);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (CGdiSpriteBitmap *)*((_QWORD *)this + 21);
  if ( v3 )
    CGdiSpriteBitmap::Release(v3);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
