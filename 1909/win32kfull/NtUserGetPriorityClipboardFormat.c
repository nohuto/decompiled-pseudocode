/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1C022DD60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetPriorityClipboardFormat @ 0x1C020DF58 (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(volatile void *Address, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v6; // rcx
  unsigned int PriorityClipboardFormat; // [rsp+28h] [rbp-20h]

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  ProbeForRead(Address, 4 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  PriorityClipboardFormat = GetPriorityClipboardFormat((unsigned int *)Address, v2);
  UserSessionSwitchLeaveCrit(v6);
  return PriorityClipboardFormat;
}
