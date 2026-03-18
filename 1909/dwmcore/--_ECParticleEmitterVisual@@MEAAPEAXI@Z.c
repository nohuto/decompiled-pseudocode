/*
 * XREFs of ??_ECParticleEmitterVisual@@MEAAPEAXI@Z @ 0x1801EA230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CParticleEmitterVisual@@MEAA@XZ @ 0x1801E9D6C (--1CParticleEmitterVisual@@MEAA@XZ.c)
 */

struct CResource **__fastcall CParticleEmitterVisual::`vector deleting destructor'(struct CResource **this, char a2)
{
  CParticleEmitterVisual::~CParticleEmitterVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      operator delete(this);
  }
  return this;
}
