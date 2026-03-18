/*
 * XREFs of SetPointerMetaVisibility @ 0x1C00BD124
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01CA22C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C00A2650 (GreHidePointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
