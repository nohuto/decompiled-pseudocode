/*
 * XREFs of ExpWorkQueueManagerStart @ 0x14077A860
 * Callers:
 *     ExpPartitionStart @ 0x14077A7B0 (ExpPartitionStart.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140913B00 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExpPartitionCreateSystemThread @ 0x1406B35C4 (ExpPartitionCreateSystemThread.c)
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
