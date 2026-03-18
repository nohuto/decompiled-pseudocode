/*
 * XREFs of EtwSyscallFilterMessage @ 0x1C0086060
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C0085EF0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     McTemplateK0szzq @ 0x1C0086090 (McTemplateK0szzq.c)
 */

__int64 __fastcall EtwSyscallFilterMessage(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0szzq(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
