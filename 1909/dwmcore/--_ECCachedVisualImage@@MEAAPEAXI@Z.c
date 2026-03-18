/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x1800AD33C
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800F1120 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 *     ??_ECCachedVisualImage@@OEI@EAAPEAXI@Z @ 0x1800F1130 (--_ECCachedVisualImage@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800AD37C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
