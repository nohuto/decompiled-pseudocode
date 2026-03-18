/*
 * XREFs of CheckAllowForeground @ 0x1C00123D0
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00122C0 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C0012630 (CanForceForeground.c)
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 */

__int64 __fastcall CheckAllowForeground(__int64 a1)
{
  int v1; // r12d
  unsigned int v2; // ebx
  void *v3; // r14
  unsigned int v4; // r15d
  int v5; // esi
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdi
  __int64 v9; // rax
  PACCESS_TOKEN v10; // rax
  void *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int *v14; // rax
  int v15; // eax
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v17; // rdx
  PEPROCESS Process; // [rsp+78h] [rbp+50h] BYREF
  _LUID AuthenticationId; // [rsp+80h] [rbp+58h] BYREF
  __int64 v21; // [rsp+88h] [rbp+60h]

  v1 = 1;
  v2 = 0;
  v3 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_35;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
      break;
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
    {
      ObfDereferenceObject(Process);
LABEL_35:
      ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
      v17 = 0LL;
      while ( ghCanActivateForegroundPIDs[v17] != ProcessInheritedFromUniqueProcessId )
      {
        if ( ++v17 >= 5 )
          goto LABEL_29;
      }
      return 1;
    }
    if ( !v1
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v13 = *(_QWORD *)(v7 + 664)) != 0 && (*(_DWORD *)(v13 + 32) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_29;
    }
    v5 = CanForceForeground(v7);
    if ( !v5 )
    {
      v9 = *(_QWORD *)(v7 + 320);
      if ( v9 && (*(_DWORD *)(v9 + 480) & 0x20) != 0 )
      {
        v5 = 1;
      }
      else
      {
        v21 = PsGetProcessInheritedFromUniqueProcessId(Process);
        v3 = (void *)v21;
        if ( v1 )
        {
          v1 = 0;
          v10 = PsReferencePrimaryToken(Process);
          v11 = v10;
          if ( v10 )
          {
            if ( SeQueryAuthenticationIdToken(v10, &AuthenticationId) >= 0 )
            {
              if ( AuthenticationId.LowPart == luidSystem[0] && AuthenticationId.HighPart == luidSystem[1] )
              {
                *(_DWORD *)(v7 + 12) |= 0x80000u;
                v5 = 1;
              }
              else
              {
                v5 = 0;
              }
            }
            ObfDereferenceObject(v11);
          }
          v3 = (void *)v21;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v5 )
      return 1;
    v12 = v4++;
    if ( v12 >= 5 )
      goto LABEL_29;
  }
  v14 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v14) )
    v5 = 1;
  ObfDereferenceObject(Process);
  if ( v5 )
    return 1;
LABEL_29:
  if ( gptiForeground )
  {
    LOBYTE(v15) = 0;
    if ( *(_DWORD *)(gptiForeground + 624LL) <= 0x400u )
      v15 = *(_DWORD *)(gptiForeground + 640LL);
    if ( (v15 & 0x40) != 0 )
      return 1;
  }
  return v2;
}
