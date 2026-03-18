/*
 * XREFs of OpenDesktopCompletion @ 0x1C007F088
 * Callers:
 *     NtUserOpenInputDesktop @ 0x1C007CBF0 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C007D4E8 (_OpenDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01EADE0 (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  PEPROCESS *CurrentProcessWin32Process; // rax
  __int64 v7; // rdi
  __int64 v9; // rdx
  int ProcessLuid; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessWin32Process = (PEPROCESS *)PsGetCurrentProcessWin32Process(a1, a2);
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v7 + 32) & 2) == 0 || PsGetProcessId(*CurrentProcessWin32Process) == (HANDLE)gpidLogon )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  v13 = 0LL;
  ProcessLuid = GetProcessLuid(0LL, &v13);
  if ( ProcessLuid >= 0 )
  {
    if ( v13 == *(_QWORD *)(v7 + 144) )
    {
      ProcessLuid = -1073741205;
      goto LABEL_7;
    }
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_7:
  UserSetLastError(170LL, v9, v11, v12);
  return (unsigned int)ProcessLuid;
}
