/*
 * XREFs of ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1800A02E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800A0374 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CCompositionSurfaceInfo *__fastcall CCompositionSurfaceInfo::`vector deleting destructor'(
        CCompositionSurfaceInfo *this,
        char a2)
{
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
