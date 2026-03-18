/*
 * XREFs of ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800259C4
 * Callers:
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800258CC (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180058890 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CSwRenderTargetGetBounds>(CGdiSpriteBitmap **a1)
{
  CGdiSpriteBitmap *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CGdiSpriteBitmap::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
