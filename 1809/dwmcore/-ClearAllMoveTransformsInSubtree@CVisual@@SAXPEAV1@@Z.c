/*
 * XREFs of ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800EA3F8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8CC8 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800EA3F8 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004E824 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800EA3F8 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearAllMoveTransformsInSubtree(struct CVisual *a1)
{
  __int64 *v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  struct CVisual *v5; // rax
  CVisual *v6; // rbx
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Flink; // rcx

  v1 = (__int64 *)((char *)a1 + 72);
  v2 = *((_QWORD *)a1 + 9);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v3 = 0LL;
    v4 = (unsigned int)v2;
    do
    {
      v5 = (struct CVisual *)CPtrArrayBase::operator[](v1, v3);
      v6 = v5;
      if ( v5 )
      {
        CVisual::ClearAllMoveTransformsInSubtree(v5);
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 272LL))(v6) )
        {
          RenderPassInfoList = CVisual::GetRenderPassInfoList(v6);
          v8 = RenderPassInfoList;
          if ( RenderPassInfoList )
          {
            for ( i = RenderPassInfoList->Flink; i != v8; i = i->Flink )
            {
              Flink = i[-3].Flink;
              if ( Flink )
              {
                operator delete(Flink, 0x44uLL);
                i[-3].Flink = 0LL;
              }
            }
          }
        }
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
