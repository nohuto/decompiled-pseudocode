/*
 * XREFs of ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01A812C
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000ACAC (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C000A69C (SetPointerMetaVisibility.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C006AF34 (xxxUpdateSystemCursorFromRegistry.c)
 */

void __fastcall Feedback::xxxRestoreMouseCursors(Feedback *this)
{
  __int64 v1; // rbx

  EtwTraceContactVisualizationInfo(3LL);
  Feedback::gfUsingPenCursors = 0;
  Feedback::gfUsingTouchCursors = 0;
  v1 = (grpWinStaList + 168LL) & ((unsigned __int128)-(__int128)grpWinStaList >> 64);
  if ( *(_QWORD *)(v1 + 8) )
  {
    xxxUpdateSystemCursorFromRegistry(v1, 0);
    xxxUpdateSystemCursorFromRegistry(v1, 2u);
    xxxUpdateSystemCursorFromRegistry(v1, 0xBu);
    xxxUpdateSystemCursorFromRegistry(v1, 0xCu);
  }
  if ( gCursorSuppressionState != 1 )
    SetPointerMetaVisibility(1LL);
}
