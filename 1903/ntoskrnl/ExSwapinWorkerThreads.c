/*
 * XREFs of ExSwapinWorkerThreads @ 0x140727638
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 *     ExShutdownSystem @ 0x1405AE3C8 (ExShutdownSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140081C30 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     KeSetKernelStackSwapEnable @ 0x1400BA370 (KeSetKernelStackSwapEnable.c)
 *     PsGetNextPartitionUnsafe @ 0x1400F97DC (PsGetNextPartitionUnsafe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsGetNextProcessThread @ 0x1406772C0 (PsGetNextProcessThread.c)
 *     PsReferencePartitionSystemProcess @ 0x140727798 (PsReferencePartitionSystemProcess.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *i; // rcx
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v4; // rdi
  struct _KTHREAD *j; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v7; // rbx
  signed __int32 v8[8]; // [rsp+0h] [rbp-79h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v10[112]; // [rsp+60h] [rbp-19h] BYREF
  BOOLEAN Enable; // [rsp+E0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+6Fh] BYREF

  Enable = a1;
  memset(v10, 0, 0x58uLL);
  memset(&Event, 0, sizeof(Event));
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  ExAcquireFastMutex(&ExpWorkerSwapinMutex);
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v8, 0);
  for ( i = 0LL; ; i = v4 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(i);
    v4 = NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (int)PsReferencePartitionSystemProcess(NextPartitionUnsafe, &Object) >= 0 )
    {
      for ( j = 0LL; ; j = v7 )
      {
        NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)Object, j);
        v7 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*((_DWORD *)&NextProcessThread[1].SwapListEntry + 3) & 1) != 0 )
        {
          if ( NextProcessThread == CurrentThread )
          {
            KeSetKernelStackSwapEnable(Enable);
          }
          else
          {
            KeInitializeApc(
              (__int64)v10,
              (__int64)NextProcessThread,
              0,
              (__int64)ExpSetSwappingKernelApc,
              0LL,
              0LL,
              0,
              (__int64)&Enable);
            if ( KeInsertQueueApc((__int64)v10, (__int64)&Event, 0LL, 3u) )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          }
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
