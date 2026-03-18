/*
 * XREFs of ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x18015B840
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004E824 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18015ACEC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 */

char __fastcall CWindowNode::ResetWindowMove(CWindowNode *this)
{
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *i; // rbx

  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v2 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    for ( i = RenderPassInfoList->Flink; i != v2; i = i->Flink )
      CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
  }
  return 1;
}
