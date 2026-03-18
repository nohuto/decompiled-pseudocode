/*
 * XREFs of ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180152760
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x180152724 (--1CRenderTargetManager@@EEAA@XZ.c)
 */

void **__fastcall CRenderTargetManager::`scalar deleting destructor'(void **this, char a2)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
