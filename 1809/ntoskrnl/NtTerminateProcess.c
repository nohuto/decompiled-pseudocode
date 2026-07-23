/*
 * XREFs of NtTerminateProcess @ 0x14067B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeForceResumeThread @ 0x1400F1C1C (KeForceResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1406773A4 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 *     PspTerminateProcess @ 0x140678A3C (PspTerminateProcess.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1406CF4D4 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v3; // r15d
  ULONG_PTR Process; // rsi
  char PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // ebx
  volatile signed __int64 *v11; // r14
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // r8
  unsigned int v15; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    if ( !PreviousMode )
      v3 = (*(_BYTE *)(Process + 720) & 1) == 0;
    v8 = Object;
    goto LABEL_6;
  }
  Object = CurrentThread->ApcState.Process;
  v8 = (_DWORD *)Process;
  if ( PreviousMode != 1 && (*(_BYTE *)(Process + 720) & 1) == 0 || (*(_DWORD *)(Process + 1740) & 1) != 0 )
    return -1073741637;
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
LABEL_6:
    v9 = v8[184];
    --CurrentThread->KernelApcDisable;
    v15 = v9;
    v10 = PspTerminateProcess((ULONG_PTR)v8, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, v3);
    ObfDereferenceObjectWithTag(v8, 0x65547350u);
    if ( v8 == (_DWORD *)Process )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(Process + 720) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        PspExitThread(ExitStatus);
        __debugbreak();
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(v15, v10);
    }
LABEL_20:
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    return v10;
  }
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)(Process + 728);
  ExAcquirePushLockExclusiveEx(Process + 728, 0LL);
  _m_prefetchw((const void *)(Process + 772));
  v12 = *(_DWORD *)(Process + 772);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 772), v12 | 0x40000000, v12);
  }
  while ( v13 != v12 );
  if ( (v12 & 0x40000008) == 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 1572) == 259 )
      *(_DWORD *)(Process + 1572) = ExitStatus;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
    KeAbPostRelease(Process + 728);
    v10 = PspTerminateAllThreads(Process, (struct _EX_RUNDOWN_REF *)CurrentThread, ExitStatus, 0);
    goto LABEL_20;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
  KeAbPostRelease(Process + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  LOBYTE(v14) = 1;
  PspTerminateThreadByPointer((__int64)CurrentThread, (unsigned int)ExitStatus, v14);
  return 0;
}
