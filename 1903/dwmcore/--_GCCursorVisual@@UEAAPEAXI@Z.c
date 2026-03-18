/*
 * XREFs of ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1802140C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CCursorVisual *__fastcall CCursorVisual::`scalar deleting destructor'(CCursorVisual *this, char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
