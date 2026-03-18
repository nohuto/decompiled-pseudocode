/*
 * XREFs of ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x180147F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180147E24 (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 */

CProcessAttributionManager **__fastcall CProcessAttributionManager::Observer::`vector deleting destructor'(
        CProcessAttributionManager **this,
        char a2)
{
  CProcessAttributionManager::Observer::~Observer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
