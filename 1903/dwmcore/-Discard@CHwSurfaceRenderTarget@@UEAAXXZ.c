/*
 * XREFs of ?Discard@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x1801683D0
 * Callers:
 *     ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18015FAF0 (-Discard@CHwTextureRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DiscardResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@@Z @ 0x18015C9AC (-DiscardResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@@Z.c)
 */

void __fastcall CHwSurfaceRenderTarget::Discard(CHwSurfaceRenderTarget *this)
{
  CD3DDeviceLevel1 *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(int (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)this + 248LL))(this, &v2) >= 0 )
    CD3DDeviceLevel1::DiscardResource(v2, *(struct ID3D11Resource **)(*((_QWORD *)this + 17) + 128LL));
}
