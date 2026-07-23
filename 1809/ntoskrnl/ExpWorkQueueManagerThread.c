/*
 * XREFs of ExpWorkQueueManagerThread @ 0x140741C90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     ExpNewThreadNecessary @ 0x1400B6A40 (ExpNewThreadNecessary.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KeTimeOutQueueWaiters @ 0x140107034 (KeTimeOutQueueWaiters.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x14029C39C (KeSetMaximumCountPriQueue.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpCreateWorkerThread @ 0x14066BA44 (ExpCreateWorkerThread.c)
 *     ExpPartitionCreatePoolDelayed @ 0x1408D7558 (ExpPartitionCreatePoolDelayed.c)
 */

void __fastcall ExpWorkQueueManagerThread(_QWORD *a1)
{
  char v1; // r12
  struct _WORK_QUEUE_ITEM *v3; // r15
  __int64 v4; // r8
  _QWORD *PoolWithTag; // r14
  struct _KTHREAD *CurrentThread; // rbx
  char v7; // r13
  unsigned __int64 v8; // rsi
  NTSTATUS v9; // eax
  struct _KDPC *v10; // r9
  int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rdx
  int PoolDelayed; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KDPC *v18; // rcx
  __int64 j; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  __int64 i; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // r8
  int WorkerThread; // eax
  char v32; // [rsp+48h] [rbp-29h]
  USHORT Count; // [rsp+4Ch] [rbp-25h] BYREF
  struct _KTHREAD *v34; // [rsp+50h] [rbp-21h]
  unsigned __int64 v35; // [rsp+58h] [rbp-19h]
  _QWORD v36[2]; // [rsp+60h] [rbp-11h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-1h] BYREF
  PVOID Object[3]; // [rsp+80h] [rbp+Fh] BYREF

  v1 = 0;
  v32 = 1;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
    if ( v3 )
    {
      v32 = 0;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  KeSetActualBasePriorityThread((__int64)CurrentThread, 12LL, v4);
  v36[1] = -1LL;
  v36[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    -((10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v36);
  v7 = 0;
  v8 = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  v35 = v8;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v9 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v10 = 0LL;
    if ( !v9 )
      break;
    v24 = v9 - 1;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + i);
          if ( (v26 & 1) == 0 )
          {
            if ( v26 )
            {
              if ( (*(_DWORD *)(v26 + 712) & 0x4000) == 0 && !*(_DWORD *)(v26 + 4) )
              {
                v27 = (*(_DWORD *)(v26 + 712) & 0x3FFFu) - ((2 * *(_DWORD *)(v26 + 716)) >> 1);
                if ( (_DWORD)v27 )
                {
                  KeTimeOutQueueWaiters(v26, v8, v27);
                  v10 = 0LL;
                }
              }
            }
          }
        }
        CurrentThread = v34;
      }
      LOBYTE(v12) = 1;
LABEL_15:
      if ( v7 )
        goto LABEL_25;
      goto LABEL_16;
    }
    v7 = 0;
    v28 = 0LL;
    v12 = 1LL;
    do
    {
      v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + 8 * v28);
      if ( ((unsigned __int8)v29 & (unsigned __int8)v12) != 0 )
        v29 = (__int64)v10;
      if ( *(_DWORD *)(v29 + 704) == *(_DWORD *)(v29 + 708) && ExpNewThreadNecessary(v29, 0x3FFF) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v10);
        if ( v28 == v12 && v32 == (_BYTE)v10 )
        {
          *(_DWORD *)PoolWithTag = v12;
          PoolWithTag[1] = v29;
          v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
          v3->Parameter = PoolWithTag;
          v3->List.Flink = (struct _LIST_ENTRY *)v10;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v32 = 1;
        }
        WorkerThread = ExpCreateWorkerThread((_QWORD *)v29, (__int64)a1 + 276, v30, (int)v10);
        v10 = 0LL;
        v12 = 1LL;
        if ( WorkerThread < 0 )
          v1 = 1;
      }
      v28 += v12;
    }
    while ( v28 <= v12 );
LABEL_16:
    v17 = (__int64)v10;
    do
    {
      v18 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + v17);
      if ( ((unsigned __int8)v18 & (unsigned __int8)v12) != 0 )
        v18 = v10;
      *((_DWORD *)&v18[11].0 + 1) = v18[11].TargetInfoAsUlong;
      if ( ((__int64)v18[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v18[11].ProcessorHistory) || v1 )
        v7 = v12;
      v17 += 8LL;
    }
    while ( v17 <= 8 );
    if ( v7 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v10);
    CurrentThread = v34;
LABEL_25:
    KeQueryNodeActiveAffinity(*(_WORD *)(a1[1] + 146LL), &Affinity, &Count);
    if ( CurrentThread->UserAffinity.Group != Affinity.Group || CurrentThread->UserAffinity.Mask != Affinity.Mask )
      KeSetAffinityThread((__int64)CurrentThread, (__int64)&Affinity);
    v1 = 0;
    for ( j = 0LL; j < 64; j += 8LL )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + j);
      if ( (v20 & 1) == 0 && v20 && *(_DWORD *)(v20 + 664) != Count )
        KeSetMaximumCountPriQueue(v20, Count);
    }
    CurrentThread = v34;
    v8 = v35;
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v11 = 0;
    LODWORD(v12) = 1;
    v13 = 0LL;
    do
    {
      v14 = a1[1];
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(v14 + 146))
                                       + v13) & (unsigned __int8)v12) != 0 )
      {
        PoolDelayed = ExpPartitionCreatePoolDelayed(*a1, v14, (unsigned int)v11, v10);
        v10 = 0LL;
        LODWORD(v12) = 1;
      }
      else
      {
        PoolDelayed = (int)v10;
      }
      if ( PoolDelayed < 0 )
      {
        v1 = v12;
      }
      else
      {
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + v13);
        if ( ((unsigned __int8)v16 & (unsigned __int8)v12) == 0 )
        {
          if ( v16 )
          {
            if ( ExpNewThreadNecessary(v16, *(_DWORD *)(v16 + 720)) )
            {
              v23 = ExpCreateWorkerThread(v21, (__int64)a1 + 276, v22, (int)v10);
              v10 = 0LL;
              LODWORD(v12) = 1;
              if ( v23 < 0 )
                v1 = 1;
            }
          }
        }
      }
      v11 += v12;
      v13 += 8LL;
    }
    while ( v11 < 8 );
    CurrentThread = v34;
    goto LABEL_15;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
