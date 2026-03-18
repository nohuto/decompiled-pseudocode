/*
 * XREFs of ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800DD184
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800DCDA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180078900 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800DD2B0 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A76EC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801C2C48 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ResetMoveOptimizationNodes(CHwndRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rsi
  int v4; // eax
  __int64 k; // rsi
  __int64 v6; // rbp
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // r14
  struct _LIST_ENTRY *j; // rbx
  CVisual *v10; // rbx

  v2 = *((_DWORD *)this + 182) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 88) + 8 * i);
    *(_WORD *)(v6 + 945) = 0;
    RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v6);
    v8 = RenderPassInfoList;
    if ( RenderPassInfoList )
    {
      for ( j = RenderPassInfoList->Flink; j != v8; j = j->Flink )
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&j[-6].Blink);
    }
    CVisual::Release((CVisual *)v6);
  }
  v4 = *((_DWORD *)this + 200) - 1;
  for ( k = v4; k >= 0; --k )
  {
    v10 = *(CVisual **)(*((_QWORD *)this + 97) + 8 * k);
    CVisual::PurgeOldRenderPassInfos(v10);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 182) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 704, 8u);
  *((_DWORD *)this + 200) = 0;
}
