/*
 * XREFs of ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x18019EC50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18019E0C0 (--1CFilterEffect@@MEAA@XZ.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::`scalar deleting destructor'(
        CAffineTransform2DEffect *this,
        char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
