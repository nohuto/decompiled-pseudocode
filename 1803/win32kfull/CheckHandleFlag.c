/*
 * XREFs of CheckHandleFlag @ 0x1C000F81C
 * Callers:
 *     OkayToCloseWindowStation @ 0x1C000F020 (OkayToCloseWindowStation.c)
 *     OkayToCloseDesktop @ 0x1C000F0A0 (OkayToCloseDesktop.c)
 *     zzzSetDesktop @ 0x1C000F360 (zzzSetDesktop.c)
 *     _GetUserObjectInformation @ 0x1C00E0044 (_GetUserObjectInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall CheckHandleFlag(PRKPROCESS PROCESS, int a2, unsigned int a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // ebp
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 ProcessWin32Process; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = a4 + 2 * (a3 >> 2) + (a3 >> 2);
  EnterHandleFlagsCrit();
  if ( PROCESS )
  {
    if ( (unsigned int)PsGetProcessSessionId(PROCESS) != a2 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v7 = 1;
    }
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
  }
  else
  {
    ProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  }
  if ( ProcessWin32Process
    && v8 < *(_DWORD *)(ProcessWin32Process + 712)
    && _bittest64(*(const signed __int64 **)(ProcessWin32Process + 720), v8) )
  {
    v6 = 1;
  }
  if ( v7 )
    KeUnstackDetachProcess(&ApcState);
  LeaveHandleFlagsCrit();
  return v6;
}
