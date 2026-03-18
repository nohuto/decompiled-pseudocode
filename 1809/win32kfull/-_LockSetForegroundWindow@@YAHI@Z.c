/*
 * XREFs of ?_LockSetForegroundWindow@@YAHI@Z @ 0x1C01C2E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CanForceForeground @ 0x1C00B3040 (CanForceForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _LockSetForegroundWindow(__int64 a1)
{
  int v1; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rcx

  v1 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
    goto LABEL_11;
  v6 = v1 - 1;
  if ( !v6 )
  {
    if ( CanForceForeground(CurrentProcessWin32Process) && !gppiLockSFW )
    {
      MEMORY[0] = CurrentProcessWin32Process;
      return 1LL;
    }
LABEL_11:
    v7 = 5LL;
    goto LABEL_12;
  }
  if ( v6 == 1 )
  {
    if ( CurrentProcessWin32Process == gppiLockSFW )
    {
      gppiLockSFW = 0LL;
      return 1LL;
    }
    goto LABEL_11;
  }
  v7 = 87LL;
LABEL_12:
  UserSetLastError(v7, v3, v4, v5);
  return 0LL;
}
