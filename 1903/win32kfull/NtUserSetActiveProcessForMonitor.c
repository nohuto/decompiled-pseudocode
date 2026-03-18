/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C012DBD0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C001A788 (LockProcessByClientId.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01D4C74 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 ProcessWin32Process; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID v13; // rcx
  __int64 v15; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void *)a1;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 448) + 8LL);
    if ( *(_QWORD *)(v8 + 168) )
    {
      v15 = 5LL;
LABEL_13:
      UserSetLastError(v15, v8, v6, v7);
      goto LABEL_9;
    }
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2)) == 0LL
    || (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
  {
    v15 = 87LL;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      v13 = P;
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 256LL) = ProcessWin32Process;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v13 + 8LL))(v13);
    }
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(87LL, v9, v11, v12);
  }
  ObfDereferenceObject(Object);
LABEL_9:
  LeaveCrit();
  return v2;
}
