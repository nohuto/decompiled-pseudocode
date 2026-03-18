/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C01304F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  PsGetCurrentProcessWin32Process(v5, v4);
  RtlStringCchCopyW((char *)a1, 260LL, (char *)gszModuleDManipHook);
  RtlStringCchCopyW((char *)a2, 260LL, (char *)L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6);
  return 1LL;
}
