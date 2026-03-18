/*
 * XREFs of ?xxxSwitchCursors@@YAXH@Z @ 0x1C01CA2D0
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00BCF18 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C00A2650 (GreHidePointer.c)
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01CA184 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 */

void __fastcall xxxSwitchCursors(int a1)
{
  Feedback *v1; // rcx

  Feedback::gfUsingPenCursors = a1;
  Feedback::gfUsingTouchCursors = a1 == 0;
  if ( a1 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    if ( (*(_DWORD *)UPDWORDPointer(8222LL) & 0x20) == 0 || Feedback::gfForceHidePenCursor )
    {
      TransitionCursorSuppressionState(3u, 0);
    }
    else
    {
      GreHidePointer(1);
      Feedback::xxxReplaceMouseCursorsWithPenCursors(v1);
    }
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    GreHidePointer(1);
  }
}
