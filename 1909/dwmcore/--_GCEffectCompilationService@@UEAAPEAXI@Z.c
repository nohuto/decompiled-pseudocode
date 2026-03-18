/*
 * XREFs of ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x18018AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x18018A940 (--1CEffectCompilationService@@UEAA@XZ.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::`scalar deleting destructor'(
        CEffectCompilationService *this,
        char a2)
{
  CEffectCompilationService::~CEffectCompilationService(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
