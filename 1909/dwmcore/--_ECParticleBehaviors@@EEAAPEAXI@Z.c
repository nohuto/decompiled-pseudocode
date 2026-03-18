/*
 * XREFs of ??_ECParticleBehaviors@@EEAAPEAXI@Z @ 0x18019DB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CParticleBehaviors@@EEAA@XZ @ 0x1801E7310 (--1CParticleBehaviors@@EEAA@XZ.c)
 */

CParticleBehaviors *__fastcall CParticleBehaviors::`vector deleting destructor'(CParticleBehaviors *this, char a2)
{
  CParticleBehaviors::~CParticleBehaviors(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
