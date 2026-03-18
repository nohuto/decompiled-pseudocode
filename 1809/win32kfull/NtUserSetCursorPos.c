/*
 * XREFs of NtUserSetCursorPos @ 0x1C0120550
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursorPos@@YA_NHHK@Z @ 0x1C01205AC (-zzzSetCursorPos@@YA_NHHK@Z.c)
 */

_BOOL8 __fastcall NtUserSetCursorPos(int a1, int a2, unsigned int a3)
{
  BOOL v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 1LL);
  v6 = zzzSetCursorPos(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
