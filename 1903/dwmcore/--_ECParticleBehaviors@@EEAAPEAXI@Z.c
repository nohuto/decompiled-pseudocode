/*
 * XREFs of ??_ECParticleBehaviors@@EEAAPEAXI@Z @ 0x18019F420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CParticleBehaviors@@EEAA@XZ @ 0x1801E8A80 (--1CParticleBehaviors@@EEAA@XZ.c)
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
