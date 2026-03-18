/*
 * XREFs of ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x1800CAD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800CAD80 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CEffectBrush *__fastcall CEffectBrush::`scalar deleting destructor'(CEffectBrush *this, char a2)
{
  CEffectBrush::~CEffectBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
