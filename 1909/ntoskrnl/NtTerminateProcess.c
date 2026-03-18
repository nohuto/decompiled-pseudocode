/*
 * XREFs of NtTerminateProcess @ 0x1406D6760
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeForceResumeThread @ 0x140081704 (KeForceResumeThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspTerminateProcess @ 0x140677ECC (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14067A1DC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14067DB90 (PspTerminateThreadByPointer.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1406D6940 (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v3; // r15
  ULONG_PTR Process; // rsi
  char PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // ebx
  volatile signed __int64 *v11; // r14
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // [rsp+70h] [rbp+8h]
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
      v3 = (*(_BYTE *)(Process + 728) & 1) == 0;
    v8 = Object;
    goto LABEL_6;
  }
  Object = CurrentThread->ApcState.Process;
  v8 = (_DWORD *)Process;
  if ( PreviousMode != 1 && (*(_BYTE *)(Process + 728) & 1) == 0 || (*(_DWORD *)(Process + 1788) & 1) != 0 )
    return -1073741637;
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
LABEL_6:
    v9 = v8[186];
    --CurrentThread->KernelApcDisable;
    v14 = v9;
    v10 = PspTerminateProcess((ULONG_PTR)v8, (__int64)CurrentThread, ExitStatus, v3);
    ObfDereferenceObjectWithTag(v8, 0x65547350u);
    if ( v8 == (_DWORD *)Process )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(Process + 728) & 1) != 0 )
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
      PspLogAuditTerminateRemoteProcessEvent(v14, v10);
    }
LABEL_20:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return v10;
  }
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)(Process + 736);
  ExAcquirePushLockExclusiveEx(Process + 736, 0LL);
  _m_prefetchw((const void *)(Process + 780));
  v12 = *(_DWORD *)(Process + 780);
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 780), v12 | 0x40000000, v12);
  }
  while ( v13 != v12 );
  if ( (v12 & 0x40000008) == 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 1620) == 259 )
      *(_DWORD *)(Process + 1620) = ExitStatus;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 736));
    KeAbPostRelease(Process + 736);
    v10 = PspTerminateAllThreads(Process, (ULONG_PTR)CurrentThread, ExitStatus, 0);
    goto LABEL_20;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 736));
  KeAbPostRelease(Process + 736);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, ExitStatus, 1);
  return 0;
}
