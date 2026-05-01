/*
 * XREFs of _lambda_54c83054385b952be3ab173b3a76abf0_::operator() @ 0x1801DA8C8
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_54c83054385b952be3ab173b3a76abf0_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1801D9340 (--$LambdaEnumWindowsProc@V_lambda_54c83054385b952be3ab173b3a76abf0_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_54c83054385b952be3ab173b3a76abf0_::operator()(__int64 a1, HWND a2)
{
  HANDLE PropW; // rax
  WCHAR ClassName[256]; // [rsp+30h] [rbp-218h] BYREF

  if ( GetClassNameW(a2, ClassName, 256) <= 0
    || !IsWindowVisible(a2)
    || CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) != 2
    && CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) != 2 )
  {
    return 1LL;
  }
  PropW = GetPropW(a2, L"TaskbarMonitor");
  if ( !PropW || *(HANDLE *)(a1 + 8) != PropW )
    return 1LL;
  **(_QWORD **)a1 = a2;
  return 0LL;
}
