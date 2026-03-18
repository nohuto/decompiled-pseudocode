/*
 * XREFs of UserGlobalAtomTableCallout @ 0x1C003B9A0
 * Callers:
 *     RealInternalRemoveProp @ 0x1C002E9E0 (RealInternalRemoveProp.c)
 *     DeleteProperties @ 0x1C003B8A0 (DeleteProperties.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

__int64 UserGlobalAtomTableCallout()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  __int64 CurrentProcess; // rax
  __int64 ProcessJob; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 ProcessWin32WindowStation; // rax
  _QWORD *i; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  v4 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0x20000000) != 0 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 768LL);
      v5 = *(_DWORD *)(v3 + 24) & 0x20;
    }
    else
    {
      v5 = 0;
    }
    if ( v5 )
      return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 424) + 768LL) + 16LL);
  }
  CurrentProcess = PsGetCurrentProcess(v3);
  ProcessJob = PsGetProcessJob(CurrentProcess);
  v8 = ProcessJob;
  if ( !v4 && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
  {
    for ( i = (_QWORD *)gpJobsList; i && i[1] != v8; i = (_QWORD *)*i )
      ;
    return i[2];
  }
  else if ( (int)IsReferenceWindowStationSupported() < 0
         || (v10 = PsGetCurrentProcess(v9),
             ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v10),
             (int)ReferenceWindowStation(CurrentThread, ProcessWin32WindowStation, 32LL, &v14, 1) < 0) )
  {
    if ( (int)IsModerncoreAtomTableSupported() >= 0 )
      return ModerncoreAtomTable();
  }
  else
  {
    return *(_QWORD *)(v14 + 136);
  }
  return v1;
}
