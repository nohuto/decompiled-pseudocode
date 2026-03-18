/*
 * XREFs of ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C0137440
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0020CE8 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C0021100 (CanForceForeground.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(int a1)
{
  void *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // bl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = (void *)a1;
  v4 = 0;
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    gppiLockSFW = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
    if ( !CanForceForeground(CurrentProcessWin32Process) )
    {
      v8 = 5LL;
LABEL_4:
      UserSetLastError(v8, v2, v6, v7);
      return 0LL;
    }
  }
  if ( (_DWORD)v1 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED, v2);
      WPP_RECORDER_SF_q(v22, v21, 2, 36, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, v20);
    }
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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = PsGetCurrentProcessWin32Process(&WPP_RECORDER_INITIALIZED, v2);
      WPP_RECORDER_SF_qq(
        v13,
        v12,
        2u,
        0x23u,
        (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
        v11,
        ProcessWin32Process);
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v17 = PsGetCurrentProcessWin32Process(v16, v15);
    if ( (unsigned int)IsDesktopApp(v17)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 52) == PsGetCurrentProcessWin32Process(v19, v18)) )
    {
      v4 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 320), v4);
  }
  return 1LL;
}
