/*
 * XREFs of NtUserInitialize @ 0x1C00B2B40
 * Callers:
 *     <none>
 * Callees:
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 *     InitializeGreCSRSS @ 0x1C00DB42C (InitializeGreCSRSS.c)
 *     InitializePowerRequestList @ 0x1C01F1078 (InitializePowerRequestList.c)
 */

__int64 __fastcall NtUserInitialize(HANDLE Handle, __int64 a2)
{
  __int64 result; // rax
  __int64 BugCheckParameter4; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rax

  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(Handle);
  if ( (int)IsVerifyTcbPrivilegesSupported() >= 0 && !(unsigned __int8)VerifyTcbPrivileges() )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    if ( (int)IsInitializeMediaChangeSupported() < 0 || (result = InitializeMediaChange(a2), (int)result >= 0) )
    {
      byte_1C01A0BAC = 0;
      if ( (unsigned int)InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v7 = PsGetProcessWin32Process(gpepCSRSS);
        *(_DWORD *)(v7 + 812) |= 0x200000u;
        *(_DWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 280) = 18;
        return UserInitialize();
      }
      return 3221225473LL;
    }
  }
  return result;
}
