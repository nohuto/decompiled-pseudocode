/*
 * XREFs of ??_GCDcompRenderTargetGroup@@MEAAPEAXI@Z @ 0x180078230
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x180078270 (--1CDcompRenderTargetGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CDcompRenderTargetGroup *__fastcall CDcompRenderTargetGroup::`scalar deleting destructor'(
        CDcompRenderTargetGroup *this,
        char a2)
{
  CDcompRenderTargetGroup::~CDcompRenderTargetGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
