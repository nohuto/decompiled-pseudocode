/*
 * XREFs of NtUserCloseDesktop @ 0x1C000D950
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C000D998 (_CloseDesktop.c)
 */

_BOOL8 __fastcall NtUserCloseDesktop(HANDLE Handle)
{
  _BOOL8 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  v2 = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
