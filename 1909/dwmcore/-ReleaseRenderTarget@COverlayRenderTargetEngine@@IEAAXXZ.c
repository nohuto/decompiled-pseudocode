/*
 * XREFs of ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x1801A3670
 * Callers:
 *     ??1COverlayRenderTargetEngine@@EEAA@XZ @ 0x1801A2AEC (--1COverlayRenderTargetEngine@@EEAA@XZ.c)
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A2F84 (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ @ 0x1801A36B0 (-ReleaseResourcesForDisplayChange@COverlayRenderTargetEngine@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801A3C10 (-reset@-$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall COverlayRenderTargetEngine::ReleaseRenderTarget(COverlayRenderTargetEngine *this)
{
  char *v1; // rbx

  v1 = (char *)this + 216;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 27));
  wil::com_ptr_t<CCompositionSurfaceBitmap,wil::err_returncode_policy>::reset(v1);
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 28);
}
