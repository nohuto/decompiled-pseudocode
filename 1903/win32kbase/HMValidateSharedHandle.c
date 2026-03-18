/*
 * XREFs of HMValidateSharedHandle @ 0x1C003D614
 * Callers:
 *     UserGetHDevFromMonitor @ 0x1C003A1F0 (UserGetHDevFromMonitor.c)
 *     NtUserGetHDevName @ 0x1C003A890 (NtUserGetHDevName.c)
 *     NtUserGetDpiForMonitor @ 0x1C003D3A0 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C003D600 (ValidateHmonitor.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C0064C60 (NtUserGetUniformSpaceMapping.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0119720 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0119980 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 result; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v4 = (char *)qword_1C0213758 + (unsigned int)(unsigned __int16)a1 * dword_1C0213760,
        GetDomainLockRef(14LL, a2, a3),
        v6 = gpKernelHandleTable,
        v7 = a1 >> 16,
        v8 = 3LL * (unsigned int)((v4 - (char *)qword_1C0213758) >> 5),
        (_WORD)v7 != *((_WORD *)v4 + 13))
    && (_WORD)v7 != 0xFFFF
    && ((_WORD)v7 || !PsGetCurrentProcessWow64Process(v5))
    || (v4[25] & 1) != 0
    || v4[24] != 12
    || (result = v6[v8]) == 0 )
  {
    UserSetLastError(1461LL, a2);
    return 0LL;
  }
  return result;
}
