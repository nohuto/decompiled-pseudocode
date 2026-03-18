/*
 * XREFs of ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x1801746C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801C2740 (--1CGeometryGroup@@MEAA@XZ.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::`vector deleting destructor'(CGeometryGroup *this, char a2)
{
  CGeometryGroup::~CGeometryGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
