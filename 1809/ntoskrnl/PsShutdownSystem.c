/*
 * XREFs of PsShutdownSystem @ 0x14088C204
 * Callers:
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400B9B60 (PsIsCurrentThreadInServerSilo.c)
 *     SmIsCompressionProcess @ 0x14011B058 (SmIsCompressionProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     PsEnumProcesses @ 0x1405B2AFC (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
 *     PspGetNextSilo @ 0x140601968 (PspGetNextSilo.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     PsTerminateProcess @ 0x1406CAB74 (PsTerminateProcess.c)
 *     PsTerminateServerSilo @ 0x140887CD0 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x14088CAC8 (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  void *ServerSiloGlobals; // r15
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
  unsigned __int64 v18; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  void *v20; // r14
  void *v21; // rcx
  signed __int32 v22[8]; // [rsp+0h] [rbp-88h] BYREF
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
        if ( (NextProcess[435] & 0x1000) == 0
          && NextProcess != PsIdleProcess
          && NextProcess != *((_DWORD **)ServerSiloGlobals + 110)
          && !SmIsCompressionProcess(NextProcess) )
        {
          v10 = PsTerminateProcess(v9, 0xC00002EB);
          if ( (NextProcess[193] & 4) == 0 && v10 != 290 && (unsigned int)v7 < 3 )
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
      v18 = *(_QWORD *)(v17 + 40);
      if ( v18 )
      {
        MiUnmapViewOfSection((ULONG_PTR)PsInitialSystemProcess, v18, 0, 0);
        v17 = *v15;
      }
      CurrentThread = KeGetCurrentThread();
      v20 = (void *)ObFastReplaceObject((volatile __int64 *)v17, 0LL);
      if ( v20 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v22, 0);
        if ( (*(_QWORD *)(v17 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v17 + 8));
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        ObfDereferenceObject(v20);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 14));
  *((_QWORD *)PspSystemPartition + 14) = 0LL;
  v21 = (void *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14];
  if ( (unsigned __int64)v21 >= 2 )
  {
    ObfDereferenceObject(v21);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[14] = 1LL;
  }
  return v0;
}
