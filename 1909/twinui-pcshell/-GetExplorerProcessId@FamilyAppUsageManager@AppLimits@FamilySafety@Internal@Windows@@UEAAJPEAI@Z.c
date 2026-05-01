/*
 * XREFs of ?GetExplorerProcessId@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAI@Z @ 0x1800B1700
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180181AF8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetExplorerProcessId(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        unsigned int *a2)
{
  HWND ShellWindow; // rax
  const char *v4; // r9
  _QWORD *v6; // rdx
  const char *v7; // r9
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+48h] [rbp+10h] BYREF

  v8[4] = -2LL;
  *a2 = 0;
  ShellWindow = GetShellWindow();
  if ( !GetWindowThreadProcessId(ShellWindow, &dwProcessId) )
  {
    try
    {
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0xB8,
        (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
        v4);
      __debugbreak();
_Windows__Internal__FamilySafety__AppLimits__FamilyAppUsageManager__GetExplorerProcessId____1___catch$0:
      *((_DWORD *)v6 + 18) = wil::details::in1diag3::Return_CaughtException(
                               (wil::details::in1diag3 *)v6[7],
                               (void *)0xBC,
                               (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                               v7);
      return dwProcessId;
    }
    catch ( ... )
    {
      v6 = v8;
      goto _Windows__Internal__FamilySafety__AppLimits__FamilyAppUsageManager__GetExplorerProcessId____1___catch$0;
    }
  }
  *a2 = dwProcessId;
  return 0LL;
}
