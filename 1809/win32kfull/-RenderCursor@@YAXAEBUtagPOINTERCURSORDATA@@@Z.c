/*
 * XREFs of ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01C9F74
 * Callers:
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 * Callees:
 *     GreMovePointer @ 0x1C00A1790 (GreMovePointer.c)
 *     GreHidePointer @ 0x1C00A2650 (GreHidePointer.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01CA118 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 */

void __fastcall RenderCursor(const struct tagPOINTERCURSORDATA *a1)
{
  int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  Feedback *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v1 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v1 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
    Feedback::gfInRange = 1;
  }
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *((unsigned int *)a1 + 1), *((_DWORD *)a1 + 2), 8);
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, (const struct tagPOINT *)((char *)a1 + 4), 0);
  if ( v1 )
  {
    EnterCrit(0LL, 1LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8u, 0);
    GreHidePointer(0);
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors )
    {
      if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
        TransitionCursorSuppressionState(2u, 0);
      Feedback::xxxReplaceArrowWithNullCursor(v12);
    }
    UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
    Feedback::gfInRange = 0;
  }
}
