/*
 * XREFs of ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x180193CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x180193CA0 (--$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z.c)
 */

struct CResource **__fastcall CCursorVisual::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCursorVisual::`vftable';
  CResource::UnRegisterNotifier<CVisualReference *>((CResource *)this, this + 73);
  CVisual::~CVisual((CVisual *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
