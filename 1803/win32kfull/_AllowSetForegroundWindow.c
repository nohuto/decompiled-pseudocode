/*
 * XREFs of _AllowSetForegroundWindow @ 0x1C006E100
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0012364 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C0012630 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllowSetForegroundWindow(int a1)
{
  void *v1; // rdi
  __int64 v2; // rcx
  bool v3; // bl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessWin32Process; // rsi
  struct tagTHREADINFO *PtiLastWokenHotKey; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void *)a1;
  v3 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( !(unsigned int)CanForceForeground(CurrentProcessWin32Process) )
    {
      v6 = 5LL;
LABEL_4:
      UserSetLastError(v6, v5);
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
      v6 = 87LL;
      goto LABEL_4;
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v11 = PsGetCurrentProcessWin32Process(v10);
    if ( (unsigned int)IsDesktopApp(v11)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 52) == PsGetCurrentProcessWin32Process(v12)) )
    {
      v3 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 320), v3);
  }
  return 1LL;
}
