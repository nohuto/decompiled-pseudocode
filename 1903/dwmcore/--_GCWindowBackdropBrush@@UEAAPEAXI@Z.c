/*
 * XREFs of ??_GCWindowBackdropBrush@@UEAAPEAXI@Z @ 0x180020030
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSpriteVisualContent@@MEAA@XZ @ 0x180088FE8 (--1CSpriteVisualContent@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CWindowBackdropBrush *__fastcall CWindowBackdropBrush::`scalar deleting destructor'(
        CWindowBackdropBrush *this,
        char a2)
{
  CSpriteVisualContent::~CSpriteVisualContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
