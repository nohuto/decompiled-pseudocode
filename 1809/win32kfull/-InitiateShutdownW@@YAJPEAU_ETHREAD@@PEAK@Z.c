/*
 * XREFs of ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C012F3DC
 * Callers:
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsPrivileged @ 0x1C00CCBB0 (IsPrivileged.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C012F66C (-NotifyLogon@@YAHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitiateShutdownW(PETHREAD Thread, unsigned int *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // ecx
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rdi
  char v15; // di
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
  v9 = *(_QWORD *)(ProcessWin32Process + 672);
  if ( PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon )
    goto LABEL_5;
  v5 &= ~0x200u;
  *a2 = v5;
  if ( !v9 )
    return 3221225480LL;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v8 + 688), 0x40u) )
    return 3221225506LL;
  if ( (v5 & 1) != 0 )
  {
    if ( !(unsigned int)IsPrivileged(&RequiredPrivileges) )
      return 3221225569LL;
  }
  else if ( (*(_DWORD *)(v9 + 32) & 4) != 0 )
  {
    return 3221225488LL;
  }
LABEL_5:
  if ( gdwThreadEndSession )
  {
    if ( v16 == *(_QWORD *)(grpwinstaLogoff + 144LL) || gpidEndSession == (void *)gpidLogon )
    {
      v15 = v5 & ~(_BYTE)gdwShutdownFlags & 7;
      if ( !v15 || (unsigned int)PsGetCurrentThreadId() == gdwThreadEndSession )
        return 259LL;
      if ( (v5 & 1) == 0 && v9 != grpwinstaLogoff )
        return 2147483665LL;
      if ( (v15 & 4) == 0 )
        return 259LL;
    }
    return 3221226029LL;
  }
  else
  {
    if ( PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon )
    {
LABEL_7:
      v11 = v5 | 0x200;
      *a2 = v11;
      gdwShutdownFlags = v11;
      gdwThreadEndSession = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpsi + 2236LL) |= 1u;
      gpidEndSession = (void *)PsGetCurrentThreadProcessId();
      LockObjectAssignment(grpwinstaLogoff, v9);
      v12 = *(_DWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 144) = v16;
      gdwLocks = v12 & 3;
      result = 0LL;
      *(_DWORD *)(v9 + 32) = v12 | 0xA;
      return result;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread, v10);
    if ( (v5 & 0x8000) != 0 )
    {
      v5 &= ~0x8000u;
      *a2 = v5;
    }
    if ( (unsigned int)NotifyLogon(v5) )
      return 259LL;
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 892) )
      goto LABEL_7;
    return 3221225688LL;
  }
}
