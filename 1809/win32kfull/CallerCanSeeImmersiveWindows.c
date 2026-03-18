/*
 * XREFs of CallerCanSeeImmersiveWindows @ 0x1C0071188
 * Callers:
 *     NtUserBuildHwndList @ 0x1C006FAB0 (NtUserBuildHwndList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CallerCanSeeImmersiveWindows(__int64 a1)
{
  __int64 v1; // rdx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  _BOOL8 result; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = *(unsigned int *)(CurrentProcessWin32Process + 820);
  result = 1;
  if ( (v5 & 0x30) == 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v5, v1, v3, v4);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess)
      && *(int *)(CurrentProcessWin32Process + 12) >= 0
      && *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS
      && (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x800) == 0 )
    {
      return 0;
    }
  }
  return result;
}
