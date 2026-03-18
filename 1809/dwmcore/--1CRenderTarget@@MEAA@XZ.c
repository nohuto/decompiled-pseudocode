/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x1800778A4
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18001D3A4 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800E80F0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180159404 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x18015E1F8 (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x18015F364 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180210A94 (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077950 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
