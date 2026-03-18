/*
 * XREFs of ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x18006C130
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEffectGroup@@MEAA@XZ @ 0x18006C170 (--1CEffectGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CEffectGroup *__fastcall CEffectGroup::`vector deleting destructor'(CEffectGroup *this, char a2)
{
  CEffectGroup::~CEffectGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
