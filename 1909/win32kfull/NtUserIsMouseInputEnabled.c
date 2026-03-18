/*
 * XREFs of NtUserIsMouseInputEnabled @ 0x1C0230810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 NtUserIsMouseInputEnabled()
{
  _BOOL8 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 1LL);
  v0 = ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0;
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
