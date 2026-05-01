/*
 * XREFs of ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18030D0F8
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18030C8C4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180374F84 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803753D0 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT *__fastcall Geometry::CPoint::ScreenToClient(struct tagPOINT *a1, HWND a2, LONG *a3)
{
  LONG v4; // eax

  v4 = *a3;
  a1->y = a3[1];
  a1->x = v4;
  MapWindowPoints(0LL, a2, a1, 1u);
  return a1;
}
