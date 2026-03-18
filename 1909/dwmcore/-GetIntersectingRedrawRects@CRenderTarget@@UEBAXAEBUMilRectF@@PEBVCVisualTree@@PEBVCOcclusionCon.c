/*
 * XREFs of ?GetIntersectingRedrawRects@CRenderTarget@@UEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180193E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::GetIntersectingRedrawRects(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  *(_DWORD *)(a5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a5, 0x10u);
}
