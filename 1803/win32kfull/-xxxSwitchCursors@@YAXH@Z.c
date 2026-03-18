/*
 * XREFs of ?xxxSwitchCursors@@YAXH@Z @ 0x1C01A81B8
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000ACAC (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C000A5B0 (TransitionCursorSuppressionState.c)
 *     GreHidePointer @ 0x1C000A6D0 (GreHidePointer.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01A8058 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
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
      TransitionCursorSuppressionState(3, 0);
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
