/*
 * XREFs of ??_GCPropertySet@@UEAAPEAXI@Z @ 0x18004E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPropertySet@@UEAA@XZ @ 0x18004E844 (--1CPropertySet@@UEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CPropertySet *__fastcall CPropertySet::`scalar deleting destructor'(CPropertySet *this, char a2)
{
  CPropertySet::~CPropertySet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else if ( this )
    {
      HeapFree(WPF::g_processHeap, 0, this);
    }
  }
  return this;
}
