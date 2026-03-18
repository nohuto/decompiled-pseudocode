/*
 * XREFs of SetPointerMetaVisibility @ 0x1C00811E4
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0081090 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DDC88 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C0031C10 (GreHidePointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0081918 (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
