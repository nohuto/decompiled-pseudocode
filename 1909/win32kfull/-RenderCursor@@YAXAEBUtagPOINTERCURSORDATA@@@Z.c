/*
 * XREFs of ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DD890
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00F10F0 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GreMovePointer @ 0x1C008B190 (GreMovePointer.c)
 *     GreHidePointer @ 0x1C013AA70 (GreHidePointer.c)
 *     TransitionCursorSuppressionState @ 0x1C013ACC0 (TransitionCursorSuppressionState.c)
 */

void __fastcall RenderCursor(const struct tagPOINTERCURSORDATA *a1)
{
  int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = 0;
  if ( !Feedback::gfInRange )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState != 3 && (Feedback::gfUsingPenCursors || !Feedback::gfUsingTouchCursors) )
      v1 = 1;
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    UserSessionSwitchLeaveCrit(v3);
    Feedback::gfInRange = 1;
  }
  GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *((_DWORD *)a1 + 1), *((_DWORD *)a1 + 2), 8);
  CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, (const struct tagPOINT *)((char *)a1 + 4), 0);
  if ( v1 )
  {
    EnterCrit(0LL, 1LL);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(8u, 0);
    GreHidePointer(0);
    UserSessionSwitchLeaveCrit(v4);
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    EnterCrit(0LL, 1LL);
    if ( (Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors)
      && ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
    {
      TransitionCursorSuppressionState(2u, 0);
    }
    UserSessionSwitchLeaveCrit(v5);
    Feedback::gfInRange = 0;
  }
}
