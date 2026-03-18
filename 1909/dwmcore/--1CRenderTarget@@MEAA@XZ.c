/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800DCE80
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800DCDA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180198F40 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x1801A2AEC (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1801A3CE8 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A5C0C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180243DA0 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x18024E974 (--1CLocalAppRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AE950 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
