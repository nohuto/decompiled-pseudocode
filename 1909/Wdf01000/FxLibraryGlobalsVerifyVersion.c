/*
 * XREFs of FxLibraryGlobalsVerifyVersion @ 0x1C0059EF4
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0059714 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C00589B0 (-MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z.c)
 */

__int64 (__fastcall *FxLibraryGlobalsVerifyVersion())(_OSVERSIONINFOEXW *, __int64, __int64)
{
  __int64 (__fastcall *result)(_OSVERSIONINFOEXW *, __int64, __int64); // rax
  __int64 (__fastcall *v1)(_OSVERSIONINFOEXW *, __int64, __int64); // rdi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64); // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  _OSVERSIONINFOEXW info; // [rsp+20h] [rbp-138h] BYREF

  memset(&info, 0, sizeof(info));
  result = (__int64 (__fastcall *)(_OSVERSIONINFOEXW *, __int64, __int64))Mx::MxGetSystemRoutineAddress(L"RtlVerifyVersionInfo");
  v1 = result;
  if ( result )
  {
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, __int64, __int64))Mx::MxGetSystemRoutineAddress(L"VerSetConditionMask");
    memset(&info.dwBuildNumber, 0, 0x110uLL);
    info.dwOSVersionInfoSize = 284;
    LOBYTE(v3) = 3;
    info.dwMinorVersion = 2;
    info.dwMajorVersion = 6;
    v4 = SystemRoutineAddress(0LL, 2LL, v3);
    LOBYTE(v5) = 3;
    v6 = SystemRoutineAddress(v4, 1LL, v5);
    result = (__int64 (__fastcall *)(_OSVERSIONINFOEXW *, __int64, __int64))v1(&info, 3LL, v6);
    if ( (int)result >= 0 )
      unk_1C00AEEA8 = 1;
  }
  return result;
}
