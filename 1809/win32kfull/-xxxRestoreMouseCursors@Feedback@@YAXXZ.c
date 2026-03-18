/*
 * XREFs of ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01CA22C
 * Callers:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00BCF18 (-HandlePointerCursorSideOp@@YAXXZ.c)
 * Callees:
 *     SetPointerMetaVisibility @ 0x1C00BD124 (SetPointerMetaVisibility.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA5BC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReas.c)
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
    xxxUpdateSystemCursorFromRegistry(v1, 0, 4);
    xxxUpdateSystemCursorFromRegistry(v1, 2, 4);
    xxxUpdateSystemCursorFromRegistry(v1, 11, 4);
    xxxUpdateSystemCursorFromRegistry(v1, 12, 4);
  }
  if ( gCursorSuppressionState != 1 )
    SetPointerMetaVisibility(1LL);
}
