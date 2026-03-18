/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800DC210
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800DC130 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18019A800 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x1801A43AC (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801A55A8 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A74CC (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802454B0 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x1802500E4 (--1CLocalAppRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18002E3D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(struct CResource **this)
{
  struct CResource *v2; // rcx
  struct CResource *v3; // rcx

  CRenderTarget::SetVisualTree((CRenderTarget *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  v2 = this[17];
  if ( v2 )
  {
    (*(void (__fastcall **)(struct CResource *, char *))(*(_QWORD *)v2 + 32LL))(v2, (char *)this + 80);
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)this[17] + 16LL))(this[17]);
  }
  v3 = this[14];
  if ( v3 )
    CGdiSpriteBitmap::Release((struct CResource *)((char *)v3 + 16));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
