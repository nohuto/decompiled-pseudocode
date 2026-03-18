/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18002B6BC
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800ED460 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 *     ??_ECCachedVisualImage@@OEI@EAAPEAXI@Z @ 0x1800ED470 (--_ECCachedVisualImage@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18002B6FC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
