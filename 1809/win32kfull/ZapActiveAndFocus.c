/*
 * XREFs of ZapActiveAndFocus @ 0x1C0234D20
 * Callers:
 *     <none>
 * Callees:
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 */

__int64 ZapActiveAndFocus()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  HMAssignmentUnlock(v0 + 120);
  v1 = HMAssignmentUnlock(v0 + 112);
  if ( v1 && v0 == gpqForeground )
    zzzInputFocusLostWindowEvent(v1, 11);
  return 1LL;
}
