/*
 * XREFs of ?reset@?$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801A54D0
 * Callers:
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x1801A4844 (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x1801A4F30 (-ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

CGdiSpriteBitmap *__fastcall wil::com_ptr_t<CCompositionSurfaceBitmap,wil::err_returncode_policy>::reset(
        CGdiSpriteBitmap **a1)
{
  CGdiSpriteBitmap *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CGdiSpriteBitmap *)CGdiSpriteBitmap::Release(result);
  return result;
}
