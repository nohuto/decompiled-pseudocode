/*
 * XREFs of ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x1801A4F30
 * Callers:
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x1801A43AC (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A4844 (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ @ 0x1801A4F70 (-ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801A54D0 (-reset@-$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall COverlayRenderTargetEngine::ReleaseRenderTarget(COverlayRenderTargetEngine *this)
{
  char *v1; // rbx

  v1 = (char *)this + 216;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 27));
  wil::com_ptr_t<CCompositionSurfaceBitmap,wil::err_returncode_policy>::reset(v1);
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 28);
}
