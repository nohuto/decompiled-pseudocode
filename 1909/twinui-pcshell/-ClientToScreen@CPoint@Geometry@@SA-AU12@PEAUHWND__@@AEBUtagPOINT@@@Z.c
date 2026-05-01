/*
 * XREFs of ?ClientToScreen@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1803F6E50
 * Callers:
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1803F9450 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1803F94BC (-_OnContinueDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1803F9538 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1803F9780 (-_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1803F9CFC (-_OnPressDown@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1803F9D88 (-_OnStartDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT *__fastcall Geometry::CPoint::ClientToScreen(struct tagPOINT *a1, HWND a2, LONG *a3)
{
  LONG v3; // eax

  v3 = *a3;
  a1->y = a3[1];
  a1->x = v3;
  MapWindowPoints(a2, 0LL, a1, 1u);
  return a1;
}
