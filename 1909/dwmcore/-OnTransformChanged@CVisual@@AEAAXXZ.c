/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x1800C860C
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18007B610 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C85D8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  *((_QWORD *)this + 56) = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      i[-7].Blink = 0LL;
  }
}
