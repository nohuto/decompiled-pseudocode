/*
 * XREFs of ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C00B3A80
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00B2D44 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C00B3040 (CanForceForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(int a1)
{
  void *v1; // rdi
  __int64 v2; // rcx
  bool v3; // bl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rsi
  struct tagTHREADINFO *PtiLastWokenHotKey; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void *)a1;
  v3 = 0;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( !CanForceForeground(CurrentProcessWin32Process) )
    {
      v8 = 5LL;
LABEL_4:
      UserSetLastError(v8, v5, v6, v7);
      return 0LL;
    }
  }
  if ( (_DWORD)v1 == -1 )
  {
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  else
  {
    if ( (int)LockProcessByClientId(v1, (PEPROCESS *)&Object) < 0
      || (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), !ProcessWin32Process) )
    {
      v8 = 87LL;
      goto LABEL_4;
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v13 = PsGetCurrentProcessWin32Process(v12);
    if ( (unsigned int)IsDesktopApp(v13)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 53) == PsGetCurrentProcessWin32Process(v14)) )
    {
      v3 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 328), v3);
  }
  return 1LL;
}
