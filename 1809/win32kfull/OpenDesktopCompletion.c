/*
 * XREFs of OpenDesktopCompletion @ 0x1C00F0E28
 * Callers:
 *     NtUserOpenInputDesktop @ 0x1C00EE570 (NtUserOpenInputDesktop.c)
 *     _OpenDesktop @ 0x1C00EEE38 (_OpenDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     _OpenThreadDesktop @ 0x1C01D5860 (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  PEPROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v7; // rdi
  __int64 v9; // rdx
  int ProcessLuid; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  CurrentProcessWin32Process = (PEPROCESS *)PsGetCurrentProcessWin32Process(a1);
  v7 = *(_DWORD **)(a1 + 40);
  if ( (v7[8] & 2) == 0 || PsGetProcessId(*CurrentProcessWin32Process) == (HANDLE)gpidLogon )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  ProcessLuid = GetProcessLuid(0LL, &v13);
  if ( ProcessLuid >= 0 )
  {
    if ( v13 == v7[36] && v14 == v7[37] )
    {
      ProcessLuid = -1073741205;
      goto LABEL_8;
    }
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_8:
  UserSetLastError(170LL, v9, v11, v12);
  return (unsigned int)ProcessLuid;
}
