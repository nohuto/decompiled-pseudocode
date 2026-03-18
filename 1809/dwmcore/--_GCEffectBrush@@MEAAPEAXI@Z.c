/*
 * XREFs of ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x18006EB60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x18006EBA0 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CEffectBrush *__fastcall CEffectBrush::`scalar deleting destructor'(CEffectBrush *this, char a2)
{
  CEffectBrush::~CEffectBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
