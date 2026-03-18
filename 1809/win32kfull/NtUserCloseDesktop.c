/*
 * XREFs of NtUserCloseDesktop @ 0x1C00BB4C0
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C00BB508 (_CloseDesktop.c)
 */

_BOOL8 __fastcall NtUserCloseDesktop(HANDLE Handle)
{
  _BOOL8 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 1LL);
  v2 = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
