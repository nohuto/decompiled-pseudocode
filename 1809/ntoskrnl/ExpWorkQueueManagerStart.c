/*
 * XREFs of ExpWorkQueueManagerStart @ 0x140755A90
 * Callers:
 *     ExpPartitionStart @ 0x1407559EC (ExpPartitionStart.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1408D74D0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExpPartitionCreateSystemThread @ 0x14066BB14 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpWorkQueueManagerStart(__int64 a1, __int64 a2, int a3)
{
  int SystemThread; // ecx
  __int64 v6; // [rsp+60h] [rbp+8h]

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), 1LL, 0LL) )
  {
    return 0;
  }
  else
  {
    SystemThread = ExpPartitionCreateSystemThread(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a3);
    if ( SystemThread < 0 )
      _InterlockedExchange64((volatile __int64 *)(a1 + 264), 0LL);
    else
      _InterlockedExchange64((volatile __int64 *)(a1 + 264), v6);
  }
  return (unsigned int)SystemThread;
}
