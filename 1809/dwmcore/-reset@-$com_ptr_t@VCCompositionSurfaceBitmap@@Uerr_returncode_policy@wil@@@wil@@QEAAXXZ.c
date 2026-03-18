/*
 * XREFs of ?reset@?$com_ptr_t@VCCompositionSurfaceBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015F28C
 * Callers:
 *     ?EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ @ 0x18015E68C (-EnsureRenderTarget@COverlayRenderTargetEngine@@IEAAJXZ.c)
 *     ?ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ @ 0x18015ED20 (-ReleaseRenderTarget@COverlayRenderTargetEngine@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
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
