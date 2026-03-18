/*
 * XREFs of CheckAllowForeground @ 0x1C001A910
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C001A620 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     CanForceForeground @ 0x1C001ABA0 (CanForceForeground.c)
 *     IsShellProcess @ 0x1C001ACA8 (IsShellProcess.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
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
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rax
  PACCESS_TOKEN v12; // rax
  void *v13; // r14
  unsigned int *v15; // rax
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rax
  PEPROCESS Process; // [rsp+88h] [rbp+50h] BYREF
  _LUID AuthenticationId; // [rsp+90h] [rbp+58h] BYREF
  __int64 ProcessInheritedFromUniqueProcessId; // [rsp+98h] [rbp+60h]

  v1 = 1;
  v2 = 0;
  v3 = (void *)((__int64 (*)(void))PsGetProcessInheritedFromUniqueProcessId)();
  AuthenticationId = 0LL;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    if ( PsLookupProcessByProcessId(v3, &Process) < 0 )
      goto LABEL_34;
    if ( (unsigned int)PsGetProcessSessionId(Process) != gSessionId )
    {
      v15 = (unsigned int *)UPDWORDPointer(0x2000LL);
      if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v15) )
        v5 = 1;
      ObfDereferenceObject(Process);
      v16 = v5 == 0;
      goto LABEL_29;
    }
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v7 = ProcessWin32Process;
    if ( !ProcessWin32Process )
      break;
    if ( !v1
      && ((unsigned int)IsShellProcess(ProcessWin32Process)
       || (v11 = *(_QWORD *)(v7 + 664)) != 0 && (*(_DWORD *)(v11 + 32) & 4) != 0) )
    {
      ObfDereferenceObject(Process);
      goto LABEL_30;
    }
    v5 = CanForceForeground(v7);
    if ( !v5 )
    {
      v8 = *(_QWORD *)(v7 + 320);
      if ( v8 && (*(_DWORD *)(v8 + 480) & 0x20) != 0 )
      {
        v5 = 1;
      }
      else
      {
        ProcessInheritedFromUniqueProcessId = PsGetProcessInheritedFromUniqueProcessId(Process);
        v3 = (void *)ProcessInheritedFromUniqueProcessId;
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
          v3 = (void *)ProcessInheritedFromUniqueProcessId;
        }
      }
    }
    ObfDereferenceObject(Process);
    if ( v5 )
      return 1;
    v10 = v4++;
    if ( v10 >= 5 )
      goto LABEL_30;
  }
  ObfDereferenceObject(Process);
LABEL_34:
  v18 = PsGetProcessInheritedFromUniqueProcessId(a1);
  v16 = (unsigned int)HasForegroundActivateRight(v18) == 0;
LABEL_29:
  if ( !v16 )
    return 1;
LABEL_30:
  if ( gptiForeground )
  {
    LOBYTE(v17) = 0;
    if ( *(_DWORD *)(gptiForeground + 624LL) <= 0x400u )
      v17 = *(_DWORD *)(gptiForeground + 640LL);
    if ( (v17 & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(gptiForeground, v9, 2, 53, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      }
      return 1;
    }
  }
  return v2;
}
