/*
 * XREFs of ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DDBAC
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00F1138 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C013AA70 (GreHidePointer.c)
 *     TransitionCursorSuppressionState @ 0x1C013ACC0 (TransitionCursorSuppressionState.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DDA54 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 */

void __fastcall xxxSwitchCursors(int a1, int a2)
{
  int v3; // ecx
  Feedback *v4; // rcx

  Feedback::gfUsingPenCursors = a1;
  Feedback::gfUsingTouchCursors = a1 == 0;
  if ( a1 )
  {
    EtwTraceContactVisualizationInfo(1LL);
    v3 = *(_DWORD *)UPDWORDPointer(8222LL);
    if ( a2 && ((v3 & 0x20) == 0 || Feedback::gfForceHidePenCursor) )
    {
      TransitionCursorSuppressionState(3u, 0);
    }
    else
    {
      GreHidePointer(1);
      Feedback::xxxReplaceMouseCursorsWithPenCursors(v4);
    }
  }
  else
  {
    EtwTraceContactVisualizationInfo(2LL);
    GreHidePointer(1);
  }
}
