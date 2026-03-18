/*
 * XREFs of ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x180055120
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x1800550A8 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
