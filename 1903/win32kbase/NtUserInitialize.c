/*
 * XREFs of NtUserInitialize @ 0x1C00A2D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     isInputVirtualizationEnabled @ 0x1C0032A18 (isInputVirtualizationEnabled.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0073120 (-UserInitialize@@YAJXZ.c)
 *     InitializeGreCSRSS @ 0x1C00A3564 (InitializeGreCSRSS.c)
 *     IVStartupWorkerThread @ 0x1C018DFD0 (IVStartupWorkerThread.c)
 *     InitializePowerRequestList @ 0x1C02694C8 (InitializePowerRequestList.c)
 */

__int64 __fastcall NtUserInitialize(HANDLE Handle, __int64 a2)
{
  __int64 v2; // rsi
  __int64 BugCheckParameter4; // rbx
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rax
  int v8; // edx
  int v9; // ebx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, a2, 14, 28, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  }
  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(Handle, a2);
  if ( (int)IsVerifyTcbPrivilegesSupported() >= 0 && !(unsigned __int8)VerifyTcbPrivileges() )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result < 0 )
    return result;
  if ( (int)IsInitializeMediaChangeSupported() >= 0 )
  {
    result = InitializeMediaChange(v2);
    if ( (int)result < 0 )
      return result;
  }
  byte_1C0214F28 = 0;
  if ( !(unsigned int)InitializeGreCSRSS() )
    return 3221225473LL;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v7 = PsGetProcessWin32Process(gpepCSRSS);
  *(_DWORD *)(v7 + 812) |= 0x400000u;
  *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
  v9 = UserInitialize();
  if ( v9 >= 0 && isInputVirtualizationEnabled() )
    v9 = IVStartupWorkerThread();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v8, 14, 29, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  }
  return (unsigned int)v9;
}
