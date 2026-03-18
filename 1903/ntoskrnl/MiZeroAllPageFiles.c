/*
 * XREFs of MiZeroAllPageFiles @ 0x1405ABCD4
 * Callers:
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MiZeroPageFile @ 0x1402BD2F0 (MiZeroPageFile.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rbp
  ULONG v2; // edi
  ULONG v3; // esi
  __int64 v4; // r15
  struct _KEVENT *v5; // rbp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  VfZeroAllPagesRunning = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140468888, 0LL);
  v1 = qword_140468518;
  v2 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140468888, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140468888);
  KeAbPostRelease((ULONG_PTR)qword_140468888);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v1 && v2 )
  {
    KeWaitForSingleObject(&unk_140468770, WrKernel, 0, 0, 0LL);
    v3 = v2;
    do
    {
      v4 = v3 - 1;
      v5 = (struct _KEVENT *)&Object[3 * v4 + 16];
      KeInitializeEvent(v5, NotificationEvent, 0);
      Object[v4] = v5;
      if ( (*(_BYTE *)(*(&MiSystemPartition + v4 + 988) + 204) & 0x40) != 0
        || (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x775A6D4Du)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v4 + 16], 0, 0);
      }
      else
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)*(&MiSystemPartition + v4 + 988);
        PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)v5;
        if ( v3 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v4 + 16], 0, 0);
          MiZeroPageFile(PoolWithTag);
        }
        else
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
        }
      }
      --v3;
    }
    while ( (_DWORD)v4 );
    if ( v2 > 1 )
      KeWaitForMultipleObjects(v2, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
