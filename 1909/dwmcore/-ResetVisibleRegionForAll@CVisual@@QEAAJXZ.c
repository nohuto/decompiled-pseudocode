/*
 * XREFs of ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1801C2E3C
 * Callers:
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801C2EC0 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800DD2B0 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017F290 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A76EC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 */

__int64 __fastcall CVisual::ResetVisibleRegionForAll(CVisual *this)
{
  unsigned int v1; // edi
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *i; // rbx
  signed int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v3 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    for ( i = RenderPassInfoList->Flink; i != v3; i = i->Flink )
    {
      v5 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1424u, 0LL);
        return v1;
      }
      CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
    }
  }
  return v1;
}
