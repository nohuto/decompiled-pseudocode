/*
 * XREFs of ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1800C8CE8
 * Callers:
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18007DDBC (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008BF40 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800C8C30 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18007D59C (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnInnerTransformChanged(CVisual *this)
{
  CVisual *v1; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  CVisual::OnTransformChanged(this);
  *((_QWORD *)v1 + 65) = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(v1);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      i[-2].Flink = 0LL;
  }
}
