/*
 * XREFs of ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800D4090
 * Callers:
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180048610 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800D3F98 (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CSwRenderTargetGetBounds>(CGdiSpriteBitmap **a1)
{
  CGdiSpriteBitmap *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CGdiSpriteBitmap::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
