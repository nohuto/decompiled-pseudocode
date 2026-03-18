/*
 * XREFs of ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x180066CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::RotateFrameInvalidRegions(CHwFullScreenRenderTarget *this)
{
  const struct CRegion *v1; // rdi

  v1 = (CHwFullScreenRenderTarget *)((char *)this + 408);
  if ( *((_DWORD *)this + 72) == 3 )
    FastRegion::CRegion::Copy((CHwFullScreenRenderTarget *)((char *)this + 480), v1);
  FastRegion::CRegion::Copy(v1, (CHwFullScreenRenderTarget *)((char *)this + 336));
  **((_DWORD **)this + 42) = 0;
}
