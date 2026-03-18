/*
 * XREFs of ?GetIntersectingRedrawRects@CHwndRenderTarget@@UEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801A7830
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18017682C (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionCont.c)
 */

void __fastcall CHwndRenderTarget::GetIntersectingRedrawRects(
        __int64 a1,
        float *a2,
        const struct CVisualTree *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rcx

  *(_DWORD *)(a5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a5, 0x10u);
  v9 = *(_QWORD *)(a1 + 200);
  if ( v9 )
    CDirtyRegion::GetIntersectingRedrawRects(v9, a2, a3, a4, a5);
}
