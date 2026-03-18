/*
 * XREFs of ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18004EE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGeometry@@MEAA@XZ @ 0x18004EBEC (--1CGeometry@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CRgnGeometry *__fastcall CRgnGeometry::`scalar deleting destructor'(CRgnGeometry *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CRgnGeometry::`vftable';
  v4 = (void *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
  CGeometry::~CGeometry((struct CResource **)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
