/*
 * XREFs of PspTeardownPartition @ 0x1408CB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiDeletePartition @ 0x1402C9994 (MiDeletePartition.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PsTerminateMinimalProcess @ 0x1408C9048 (PsTerminateMinimalProcess.c)
 *     ExpPartitionDestroy @ 0x140913684 (ExpPartitionDestroy.c)
 */

LONG_PTR __fastcall PspTeardownPartition(PVOID Object)
{
  unsigned __int16 *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  _DWORD *v6; // rbp
  void *v7; // r12
  PVOID v8; // rax

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = *(unsigned __int16 **)Object;
  if ( v2 )
  {
    MiDeletePartition(v2);
    *(_QWORD *)Object = 0LL;
  }
  v3 = (void *)*((_QWORD *)Object + 2);
  if ( v3 )
  {
    ExpPartitionDestroy(v3);
    *((_QWORD *)Object + 2) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 96, 0LL);
  v5 = *((_QWORD *)Object + 7);
  v6 = (_DWORD *)*((_QWORD *)Object + 13);
  v7 = (void *)*((_QWORD *)Object + 14);
  *((_QWORD *)Object + 7) = MmBadPointer;
  v8 = MmBadPointer;
  *((_QWORD *)Object + 14) = 0LL;
  *((_QWORD *)Object + 13) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 12);
  KeAbPostRelease((ULONG_PTR)Object + 96);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
  {
    PsTerminateMinimalProcess(v6, 0);
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v6);
    ObCloseHandle(v7, 0);
  }
  PsDereferencePartition(v5);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
