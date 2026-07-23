/*
 * XREFs of PsSetProcessWin32Process @ 0x1406B6640
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsSetProcessWin32Process(_QWORD *Object, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v4; // edi
  volatile signed __int64 *v8; // rbp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v11; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = Object + 91;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 91), 0LL);
  if ( a2 )
  {
    if ( (*((_DWORD *)Object + 193) & 8) != 0 || Object[117] )
    {
      v4 = -1073741558;
    }
    else
    {
      Object[117] = a2;
      if ( ((Object[248] | (Object[248] >> 30)) & 0x3FFFFFFFLL) != 0 )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x65446954u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v11[1].List.Flink = (struct _LIST_ENTRY *)Object;
          v11->WorkerRoutine = (void (__fastcall *)(void *))PspTimerDelayWorkerRoutine;
          v11->Parameter = v11;
          v11->List.Flink = 0LL;
          ExQueueWorkItem(v11, NormalWorkQueue);
        }
      }
    }
  }
  else if ( Object[117] == a3 )
  {
    Object[117] = 0LL;
  }
  else
  {
    v4 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
