/*
 * XREFs of ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x180034074
 * Callers:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x18003401C (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers(
        CDirtyRegionAnnotationAllocationSet *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  CDirtyRegionAnnotationAllocationSet **v4; // rcx
  CDirtyRegionAnnotationAllocationSet *v5; // rax

  v2 = *((_QWORD *)this + 1);
  if ( *(CDirtyRegionAnnotationAllocationSet **)v2 != this || (v3 = *(_QWORD **)(v2 + 8), *v3 != v2) )
LABEL_6:
    __fastfail(3u);
  *((_QWORD *)this + 1) = v3;
  *v3 = this;
  while ( 1 )
  {
    v4 = *(CDirtyRegionAnnotationAllocationSet ***)this;
    if ( *(CDirtyRegionAnnotationAllocationSet **)this == this )
      break;
    if ( v4[1] != this )
      goto LABEL_6;
    v5 = *v4;
    if ( *((CDirtyRegionAnnotationAllocationSet ***)*v4 + 1) != v4 )
      goto LABEL_6;
    *(_QWORD *)this = v5;
    *((_QWORD *)v5 + 1) = this;
    operator delete(v4);
  }
}
