/*
 * XREFs of ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1800CACC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ @ 0x1800CAD00 (--1-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CEffectGroup *__fastcall CEffectGroup::`scalar deleting destructor'(CEffectGroup *this, char a2)
{
  CEffectGroupGeneratedT<CEffectGroup,CEffect>::~CEffectGroupGeneratedT<CEffectGroup,CEffect>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
