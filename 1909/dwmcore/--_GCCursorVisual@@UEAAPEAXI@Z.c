/*
 * XREFs of ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1802129C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180077D38 (--1CVisual@@MEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x1801C0B28 (--$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z.c)
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
      operator delete(this);
  }
  return this;
}
