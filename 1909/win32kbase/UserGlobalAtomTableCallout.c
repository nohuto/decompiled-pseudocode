/*
 * XREFs of UserGlobalAtomTableCallout @ 0x1C000F4C4
 * Callers:
 *     DeleteProperties @ 0x1C000FC70 (DeleteProperties.c)
 *     RealInternalRemoveProp @ 0x1C0011370 (RealInternalRemoveProp.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 */

__int64 UserGlobalAtomTableCallout()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v6; // eax
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 ProcessWin32WindowStation; // rax
  _QWORD *i; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v5 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0x20000000) != 0 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 760LL);
      v6 = *(_DWORD *)(v4 + 24) & 0x20;
    }
    else
    {
      v6 = 0;
    }
    if ( v6 )
      return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 416) + 760LL) + 16LL);
  }
  CurrentProcess = PsGetCurrentProcess(v4, v3);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v9 = ProcessJob;
  if ( !v5 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    for ( i = (_QWORD *)gpJobsList; i && i[1] != v9; i = (_QWORD *)*i )
      ;
    return i[2];
  }
  else if ( (int)IsReferenceWindowStationSupported() < 0
         || (v12 = PsGetCurrentProcess(v11, v10),
             ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v12),
             (int)ReferenceWindowStation(CurrentThread, ProcessWin32WindowStation, 32LL, &v16, 1) < 0) )
  {
    if ( (int)IsModerncoreAtomTableSupported() >= 0 )
      return ModerncoreAtomTable();
  }
  else
  {
    return *(_QWORD *)(v16 + 136);
  }
  return v1;
}
