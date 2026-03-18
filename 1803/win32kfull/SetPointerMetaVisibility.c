/*
 * XREFs of SetPointerMetaVisibility @ 0x1C000A69C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C000A5B0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01A812C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C000A6D0 (GreHidePointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
