/*
 * XREFs of ZapActiveAndFocus @ 0x1C024D220
 * Callers:
 *     <none>
 * Callees:
 *     zzzInputFocusLostWindowEvent @ 0x1C0133320 (zzzInputFocusLostWindowEvent.c)
 */

__int64 ZapActiveAndFocus()
{
  __int64 v0; // rbx
  __int64 v1; // rax

  v0 = *(_QWORD *)(gptiCurrent + 424LL);
  HMAssignmentUnlock(v0 + 128);
  v1 = HMAssignmentUnlock(v0 + 120);
  if ( v1 && v0 == gpqForeground )
    zzzInputFocusLostWindowEvent(v1, 11);
  return 1LL;
}
