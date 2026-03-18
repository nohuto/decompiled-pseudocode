/*
 * XREFs of ?DxgkEngGetRedirBitmapSharedHandleApiExt@@YAXPEAUHDC__@@PEAPEAX@Z @ 0x1C0122460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkEngGetRedirBitmapSharedHandleApiExt(HDC a1, void **a2)
{
  if ( (int)IsDxgkEngGetRedirBitmapSharedHandleSupported() >= 0 )
    DxgkEngGetRedirBitmapSharedHandle(a1, a2);
}
