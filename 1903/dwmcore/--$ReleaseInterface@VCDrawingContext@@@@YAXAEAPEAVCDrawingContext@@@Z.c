/*
 * XREFs of ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800B0B44
 * Callers:
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180048610 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800B0960 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A4F80 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CDrawingContext>(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(v2 + 16));
    *a1 = 0LL;
  }
  return result;
}
