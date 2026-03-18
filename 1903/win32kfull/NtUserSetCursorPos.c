/*
 * XREFs of NtUserSetCursorPos @ 0x1C0044010
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C004405C (-zzzSetCursorPos@@YA_NHH@Z.c)
 */

_BOOL8 __fastcall NtUserSetCursorPos(int a1, int a2)
{
  BOOL v4; // ebx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v4 = zzzSetCursorPos(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
