/*
 * XREFs of ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x1800CB520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x1800CB560 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CCompiledEffectTemplate *__fastcall CCompiledEffectTemplate::`scalar deleting destructor'(
        CCompiledEffectTemplate *this,
        char a2)
{
  CCompiledEffectTemplate::~CCompiledEffectTemplate(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
