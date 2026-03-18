/*
 * XREFs of ExpWorkQueueManagerInitialize @ 0x140754E20
 * Callers:
 *     ExpPartitionInitialize @ 0x140754A84 (ExpPartitionInitialize.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     KeSelectIdealProcessor @ 0x1400D8994 (KeSelectIdealProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3C20 (KeQueryNodeActiveAffinity.c)
 *     KeInitializeTimer2 @ 0x1400FD4B0 (KeInitializeTimer2.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall ExpWorkQueueManagerInitialize(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  memset(a1, 0, 0x118uLL);
  *a1 = a2;
  a1[1] = a3;
  KeInitializeEvent((PRKEVENT)(a1 + 2), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 5), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 13), SynchronizationEvent, 0);
  KeInitializeTimer2((__int64)(a1 + 16));
  KeQueryNodeActiveAffinity(*(_WORD *)(a1[1] + 146LL), &Affinity, 0LL);
  result = KeSelectIdealProcessor(a1[1], (__int64)&Affinity, 0LL);
  *((_DWORD *)a1 + 69) = result;
  return result;
}
