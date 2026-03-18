/*
 * XREFs of ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C010D800
 * Callers:
 *     xxxSetInformationThread @ 0x1C000E040 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IsPrivileged @ 0x1C0062720 (IsPrivileged.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C010DB54 (-NotifyLogon@@YAHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitiateShutdownW(PETHREAD Thread, unsigned int *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rsi
  char v11; // di
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rdi
  int v14; // ebx
  int v15; // ecx
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  GetProcessLuid(Thread, &v16);
  v4 = *a2;
  if ( v16 == __PAIR64__(luidSystem[1], luidSystem[0]) )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v8 = ProcessWin32Process;
  if ( !ProcessWin32Process )
    return 3221225480LL;
  v10 = *(_QWORD *)(ProcessWin32Process + 664);
  if ( PsGetThreadProcessId(Thread) != (HANDLE)gpidLogon )
  {
    v5 &= ~0x200u;
    *a2 = v5;
    if ( !v10 )
      return 3221225480LL;
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v8 + 680), 0x40u) )
      return 3221225506LL;
    if ( (v5 & 1) != 0 )
    {
      if ( !(unsigned int)IsPrivileged(&RequiredPrivileges) )
        return 3221225569LL;
    }
    else if ( (*(_DWORD *)(v10 + 32) & 4) != 0 )
    {
      return 3221225488LL;
    }
  }
  if ( !gdwThreadEndSession )
  {
    if ( PsGetThreadProcessId(Thread) != (HANDLE)gpidLogon )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread, v12);
      if ( (v5 & 0x8000) != 0 )
      {
        v5 &= ~0x8000u;
        *a2 = v5;
      }
      if ( (unsigned int)NotifyLogon(v5) )
        return 259LL;
      if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 884) )
        return 3221225688LL;
    }
    v14 = v5 | 0x200;
    *a2 = v14;
    gdwShutdownFlags = v14;
    gdwThreadEndSession = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)(gpsi + 2236LL) |= 1u;
    gpidEndSession = (void *)PsGetCurrentThreadProcessId();
    LockObjectAssignment(grpwinstaLogoff, v10);
    v15 = *(_DWORD *)(v10 + 32);
    *(_QWORD *)(v10 + 144) = v16;
    gdwLocks = v15 & 3;
    result = 0LL;
    *(_DWORD *)(v10 + 32) = v15 | 0xA;
    return result;
  }
  if ( v16 != *(_QWORD *)(grpwinstaLogoff + 144LL) && gpidEndSession != (void *)gpidLogon )
    return 3221226029LL;
  v11 = v5 & ~(_BYTE)gdwShutdownFlags & 7;
  if ( !v11 || (unsigned int)PsGetCurrentThreadId() == gdwThreadEndSession )
    return 259LL;
  if ( (v5 & 1) != 0 || v10 == grpwinstaLogoff )
    return (v11 & 4) != 0 ? -1073741267 : 259;
  else
    return 2147483665LL;
}
