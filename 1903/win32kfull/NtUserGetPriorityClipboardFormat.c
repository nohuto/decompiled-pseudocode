/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1C022E380
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetPriorityClipboardFormat @ 0x1C020E208 (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(volatile void *Address, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int PriorityClipboardFormat; // [rsp+28h] [rbp-20h]

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  ProbeForRead(Address, 4 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  PriorityClipboardFormat = GetPriorityClipboardFormat((__int64)Address, (unsigned int)v2, v6, v7);
  UserSessionSwitchLeaveCrit(v8);
  return PriorityClipboardFormat;
}
