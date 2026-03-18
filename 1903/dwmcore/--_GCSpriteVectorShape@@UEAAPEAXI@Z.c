/*
 * XREFs of ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x18019FC40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801FAAD8 (--1CSpriteVectorShape@@UEAA@XZ.c)
 */

CSpriteVectorShape *__fastcall CSpriteVectorShape::`scalar deleting destructor'(CSpriteVectorShape *this, char a2)
{
  CSpriteVectorShape::~CSpriteVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
