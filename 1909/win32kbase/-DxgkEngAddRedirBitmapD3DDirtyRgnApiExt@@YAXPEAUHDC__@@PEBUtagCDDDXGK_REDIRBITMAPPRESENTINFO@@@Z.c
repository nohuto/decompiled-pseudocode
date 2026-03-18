/*
 * XREFs of ?DxgkEngAddRedirBitmapD3DDirtyRgnApiExt@@YAXPEAUHDC__@@PEBUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x1C011F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  if ( (int)IsDxgkEngAddRedirBitmapD3DDirtyRgnSupported() >= 0 )
    DxgkEngAddRedirBitmapD3DDirtyRgn(a1, a2);
}
