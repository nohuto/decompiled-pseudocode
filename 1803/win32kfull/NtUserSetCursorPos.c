/*
 * XREFs of NtUserSetCursorPos @ 0x1C0067140
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetCursorPos @ 0x1C0067194 (zzzSetCursorPos.c)
 */

__int64 __fastcall NtUserSetCursorPos(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 1LL);
  v6 = (int)zzzSetCursorPos(a1, a2, a3);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
