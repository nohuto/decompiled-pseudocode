/*
 * XREFs of ExpPartitionCreatePoolInternal @ 0x14077340C
 * Callers:
 *     ExpPartitionCreatePool @ 0x1407730EC (ExpPartitionCreatePool.c)
 *     ExpPartitionInitialize @ 0x14077320C (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolDelayed @ 0x1409135E8 (ExpPartitionCreatePoolDelayed.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpCreateWorkerThread @ 0x1406C04C8 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueInitialize @ 0x140773508 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueDestroy @ 0x140913868 (ExpWorkQueueDestroy.c)
 */

__int64 __fastcall ExpPartitionCreatePoolInternal(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  _DWORD *PoolWithTag; // rbx
  __int64 v10; // r15
  __int64 v11; // r8
  int v12; // r9d
  int v13; // esi
  int WorkerThread; // edi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2E0uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(a4 + 146));
    ExpWorkQueueInitialize((_DWORD)PoolWithTag, a2, a3, a1, a4, a5);
    v13 = 0;
    if ( 2 * PoolWithTag[179] > 0 )
    {
      while ( 1 )
      {
        WorkerThread = ExpCreateWorkerThread(PoolWithTag, v10 + 276, v11, v12);
        if ( WorkerThread < 0 )
          break;
        if ( ++v13 >= (2 * PoolWithTag[179]) >> 1 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      WorkerThread = 0;
    }
    if ( WorkerThread >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(a4 + 146)) + 8LL * a5) = PoolWithTag;
      PoolWithTag = 0LL;
      WorkerThread = 0;
    }
    if ( PoolWithTag )
    {
      ExpWorkQueueDestroy(PoolWithTag);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WorkerThread;
}
