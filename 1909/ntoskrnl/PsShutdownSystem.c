/*
 * XREFs of PsShutdownSystem @ 0x1408C8D44
 * Callers:
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140108CE8 (ExfAcquireReleasePushLockExclusive.c)
 *     SmIsCompressionProcess @ 0x14011D134 (SmIsCompressionProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     PspGetNextSilo @ 0x140615358 (PspGetNextSilo.c)
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 *     MmUnmapViewOfSection @ 0x14065E540 (MmUnmapViewOfSection.c)
 *     PsTerminateProcess @ 0x1406E90D0 (PsTerminateProcess.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 *     PsTerminateServerSilo @ 0x1408C4700 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x1408C9638 (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  void *ServerSiloGlobals; // r15
  __int64 result; // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rbx
  int v6; // ebp
  __int64 v7; // rdi
  _DWORD *NextProcess; // rbx
  ULONG_PTR v9; // rcx
  int v10; // r14d
  NTSTATUS v11; // r14d
  PVOID *v12; // rbx
  __int64 v13; // rsi
  ULONG_PTR v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  void *v19; // r14
  void *v20; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-40h] BYREF

  Timeout.QuadPart = -1000000000LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo((__int64)NextSilo);
  }
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  while ( 1 )
  {
    v7 = 0LL;
    NextProcess = (_DWORD *)PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( (NextProcess[447] & 0x1000) == 0
          && NextProcess != PsIdleProcess
          && NextProcess != *((_DWORD **)ServerSiloGlobals + 110)
          && !SmIsCompressionProcess(NextProcess) )
        {
          v10 = PsTerminateProcess(v9, 0xC00002EB);
          if ( (NextProcess[195] & 4) == 0 && v10 != 290 && (unsigned int)v7 < 3 )
          {
            ObfReferenceObject(NextProcess);
            Object[v7] = NextProcess;
            v7 = (unsigned int)(v7 + 1);
          }
        }
        NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
      if ( (_DWORD)v7 )
      {
        v11 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
        v12 = Object;
        v13 = (unsigned int)v7;
        do
        {
          ObfDereferenceObject(*v12++);
          --v13;
        }
        while ( v13 );
        if ( v11 == 258 )
          break;
      }
    }
    v6 = 0;
LABEL_42:
    if ( !(_DWORD)v7 )
      goto LABEL_26;
  }
  if ( (unsigned int)++v6 <= 0xA || PsContinueWaiting )
    goto LABEL_42;
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v14 = *((_QWORD *)ServerSiloGlobals + 110);
    if ( v14 )
    {
      PsTerminateProcess(v14, 0xC00002EB);
      PspWaitForUsermodeExit(*((_QWORD *)ServerSiloGlobals + 110));
    }
  }
  v15 = (__int64 *)&PspSystemDlls;
  v16 = 6LL;
  do
  {
    v17 = *v15;
    if ( *v15 )
    {
      if ( *(_QWORD *)(v17 + 40) )
      {
        MmUnmapViewOfSection((ULONG_PTR)PsInitialSystemProcess);
        v17 = *v15;
      }
      CurrentThread = KeGetCurrentThread();
      v19 = (void *)ObFastReplaceObject((volatile __int64 *)v17, 0LL);
      if ( v19 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v21, 0);
        if ( (*(_QWORD *)(v17 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v17 + 8));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObject(v19);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 14));
  *((_QWORD *)PspSystemPartition + 14) = 0LL;
  v20 = (void *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[13];
  if ( (unsigned __int64)v20 >= 2 )
  {
    ObfDereferenceObject(v20);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[13] = 1LL;
  }
  EtwUnregister(stru_140425558.RegHandle);
  stru_140425558.RegHandle = 0LL;
  result = v0;
  stru_140425558.LevelPlus1 = 0;
  return result;
}
