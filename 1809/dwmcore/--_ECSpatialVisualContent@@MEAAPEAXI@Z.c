/*
 * XREFs of ??_ECSpatialVisualContent@@MEAAPEAXI@Z @ 0x1801DAE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CSpatialVisualContent@@MEAA@XZ @ 0x1801DADFC (--1CSpatialVisualContent@@MEAA@XZ.c)
 */

CSpatialVisualContent *__fastcall CSpatialVisualContent::`vector deleting destructor'(
        CSpatialVisualContent *this,
        char a2)
{
  CSpatialVisualContent::~CSpatialVisualContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
