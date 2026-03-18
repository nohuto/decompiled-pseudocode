/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C0105E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(NTSTRSAFE_PWSTR pszDest, NTSTRSAFE_PWSTR a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(pszDest, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  PsGetCurrentProcessWin32Process(v4);
  RtlStringCchCopyW(pszDest, 0x104uLL, &gszModuleDManipHook);
  RtlStringCchCopyW(a2, 0x104uLL, L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return 1LL;
}
