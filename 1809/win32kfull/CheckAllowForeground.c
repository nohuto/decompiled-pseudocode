/*
 * XREFs of CheckAllowForeground @ 0x1C00B2DC0
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00B2C88 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C00B3040 (CanForceForeground.c)
 *     IsShellProcess @ 0x1C00B3148 (IsShellProcess.c)
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
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  PACCESS_TOKEN v12; // rax
  void *v13; // r14
  unsigned int *v14; // rax
  int v15; // eax
  __int64 ProcessInheritedFromUniqueProcessId; // rax
  __int64 v18; // rdx
  PEPROCESS Process; // [rsp+78h] [rbp+50h] BYREF
  _LUID AuthenticationId; // [rsp+80h] [rbp+58h] BYREF
  __int64 v22; // [rsp+88h] [rbp+60h]

  v1 = 1;
  v2 = 0;
  v3 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_32;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
      break;
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
    {
      ObfDereferenceObject(Process);
LABEL_32:
      ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(a1);
      v18 = 0LL;
      while ( ghCanActivateForegroundPIDs[v18] != ProcessInheritedFromUniqueProcessId )
      {
        if ( ++v18 >= 5 )
          goto LABEL_25;
      }
      return 1;
    }
    if ( !v1
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v9 = *(_QWORD *)(v8 + 672)) != 0 && (*(_DWORD *)(v9 + 32) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_25;
    }
    v5 = CanForceForeground(v7);
    if ( !v5 )
    {
      v10 = *(_QWORD *)(v7 + 328);
      if ( v10 && (*(_DWORD *)(v10 + 488) & 0x20) != 0 )
      {
        v5 = 1;
      }
      else
      {
        v22 = PsGetProcessInheritedFromUniqueProcessId(Process);
        v3 = (void *)v22;
        if ( v1 )
        {
          v1 = 0;
          v12 = PsReferencePrimaryToken(Process);
          v13 = v12;
          if ( v12 )
          {
            if ( SeQueryAuthenticationIdToken(v12, &AuthenticationId) >= 0 )
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
            ObfDereferenceObject(v13);
          }
          v3 = (void *)v22;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v5 )
      return 1;
    v11 = v4++;
    if ( v11 >= 5 )
      goto LABEL_25;
  }
  v14 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v14) )
    v5 = 1;
  ObfDereferenceObject(Process);
  if ( v5 )
    return 1;
LABEL_25:
  if ( gptiForeground )
  {
    LOBYTE(v15) = 0;
    if ( *(_DWORD *)(gptiForeground + 632LL) <= 0x400u )
      v15 = *(_DWORD *)(gptiForeground + 648LL);
    if ( (v15 & 0x40) != 0 )
      return 1;
  }
  return v2;
}
