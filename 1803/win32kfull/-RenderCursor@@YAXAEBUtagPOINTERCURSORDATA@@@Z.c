/*
 * XREFs of ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01A7E90
 * Callers:
 *     xxxDesktopThread @ 0x1C000D660 (xxxDesktopThread.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C000A5B0 (TransitionCursorSuppressionState.c)
 *     GreHidePointer @ 0x1C000A6D0 (GreHidePointer.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01A7CA8 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01A7FD4 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 */

void __fastcall RenderCursor(const struct tagPOINTERCURSORDATA *a1, const struct tagPOINT *a2)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  Feedback *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v2 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v2 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2, 0);
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    Feedback::gfInRange = 1;
  }
  Feedback::MoveCursor((const struct tagPOINTERCURSORDATA *)((char *)a1 + 4), a2);
  if ( v2 )
  {
    EnterCrit(0LL, 1LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8, 0);
    GreHidePointer(0);
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors )
    {
      if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
        TransitionCursorSuppressionState(2, 0);
      Feedback::xxxReplaceArrowWithNullCursor(v13);
    }
    UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
    Feedback::gfInRange = 0;
  }
}
