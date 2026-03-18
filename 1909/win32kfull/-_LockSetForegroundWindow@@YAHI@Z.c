/*
 * XREFs of ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01D5FB0
 * Callers:
 *     <none>
 * Callees:
 *     CanForceForeground @ 0x1C0021100 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LockSetForegroundWindow(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // ecx

  v2 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_13;
  v8 = v2 - 1;
  if ( !v8 )
  {
    if ( CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          v10,
          v4,
          2,
          37,
          (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
          CurrentProcessWin32Process);
      return 1LL;
    }
LABEL_13:
    v9 = 5LL;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    if ( CurrentProcessWin32Process == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_(v5, v4, 2, 38, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      }
      return 1LL;
    }
    goto LABEL_13;
  }
  v9 = 87LL;
LABEL_14:
  UserSetLastError(v9, v4, v6, v7);
  return 0LL;
}
