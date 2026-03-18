/*
 * XREFs of ??_ECParticleEmitterVisual@@MEAAPEAXI@Z @ 0x1801AA870
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::`vector deleting destructor'(
        CParticleEmitterVisual *this,
        char a2)
{
  *(_QWORD *)this = &CParticleEmitterVisual::`vftable';
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
