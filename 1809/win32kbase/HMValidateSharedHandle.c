/*
 * XREFs of HMValidateSharedHandle @ 0x1C0013BD4
 * Callers:
 *     UserGetHDevFromMonitor @ 0x1C00135D8 (UserGetHDevFromMonitor.c)
 *     NtUserGetHDevName @ 0x1C0013910 (NtUserGetHDevName.c)
 *     NtUserGetDpiForMonitor @ 0x1C0013A20 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C0013BC0 (ValidateHmonitor.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00F0000 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00F0260 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(int a1)
{
  _QWORD *v1; // rsi
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v1 = gpKernelHandleTable,
        v2 = (char *)qword_1C01CBA58 + (unsigned int)(unsigned __int16)a1 * dword_1C01CBA60,
        v3 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C01CBA60) >> 5),
        HIWORD(a1) != *((_WORD *)v2 + 13))
    && HIWORD(a1) != 0xFFFF
    && (HIWORD(a1) || !PsGetCurrentProcessWow64Process((unsigned __int16)a1))
    || (v2[25] & 1) != 0
    || v2[24] != 12
    || (result = v1[v3]) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
