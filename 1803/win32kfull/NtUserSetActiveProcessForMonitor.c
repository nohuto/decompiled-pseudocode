/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C00BD950
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0012364 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BDA20 (xxxRefreshDisplayOrientation.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C019FC94 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 ProcessWin32Process; // rsi
  __int64 v11; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (void *)a1;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 448) + 8LL);
    if ( *(_QWORD *)(v7 + 168) )
    {
      v11 = 5LL;
LABEL_13:
      UserSetLastError(v11, v7);
      goto LABEL_9;
    }
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2)) == 0LL
    || (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
  {
    v11 = 87LL;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 256LL) = ProcessWin32Process;
      xxxRefreshDisplayOrientation();
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(87LL, v8);
  }
  ObfDereferenceObject(Object);
LABEL_9:
  LeaveCrit();
  return v2;
}
