/*
 * XREFs of ?ShouldUseDrawListRenderPath@CShapeTree@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18020F1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800B5780 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18020F150 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 */

char __fastcall CShapeTree::ShouldUseDrawListRenderPath(CShapeTree *this, struct CDrawingContext *a2)
{
  char v3; // bl

  v3 = 0;
  if ( CDrawingContext::IsIn3DMode((struct CDrawingContext *)((char *)a2 + 8))
    || !*((_DWORD *)a2 + 192) && *((_DWORD *)a2 + 174)
    || CDrawingContext::IsHDRTarget(a2) )
  {
    return 1;
  }
  return v3;
}
