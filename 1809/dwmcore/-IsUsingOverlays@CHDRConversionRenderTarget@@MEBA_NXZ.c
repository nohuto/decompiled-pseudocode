/*
 * XREFs of ?IsUsingOverlays@CHDRConversionRenderTarget@@MEBA_NXZ @ 0x180209450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHDRConversionRenderTarget::IsUsingOverlays(CHDRConversionRenderTarget *this)
{
  return ((*((_DWORD *)this + 172) - 1) & 0xFFFFFFFD) == 0;
}
