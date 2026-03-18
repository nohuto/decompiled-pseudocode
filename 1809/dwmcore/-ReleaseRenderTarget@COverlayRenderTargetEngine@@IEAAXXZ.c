/*
 * XREFs of ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x18015ED20
 * Callers:
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x18015E1F8 (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015E68C (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ @ 0x18015ED60 (-ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015F28C (-reset@-$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall COverlayRenderTargetEngine::ReleaseRenderTarget(COverlayRenderTargetEngine *this)
{
  char *v1; // rbx

  v1 = (char *)this + 216;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 27));
  wil::com_ptr_t<CCompositionSurfaceBitmap,wil::err_returncode_policy>::reset(v1);
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 28);
}
