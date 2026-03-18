/*
 * XREFs of ??_ECParticleEmitter@@MEAAPEAXI@Z @ 0x1801C52D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CParticleEmitter@@MEAA@XZ @ 0x1801C4CBC (--1CParticleEmitter@@MEAA@XZ.c)
 */

CParticleEmitter *__fastcall CParticleEmitter::`vector deleting destructor'(CParticleEmitter *this, char a2)
{
  CParticleEmitter::~CParticleEmitter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
