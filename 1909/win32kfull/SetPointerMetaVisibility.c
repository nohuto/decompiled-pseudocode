/*
 * XREFs of SetPointerMetaVisibility @ 0x1C013AA38
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C013ACC0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DDB08 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     GreHidePointer @ 0x1C013AA70 (GreHidePointer.c)
 */

__int64 __fastcall SetPointerMetaVisibility(unsigned int a1)
{
  zzzEnableDwmPointerSupport(a1, 1);
  return GreHidePointer(a1 == 0);
}
