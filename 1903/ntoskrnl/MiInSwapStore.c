/*
 * XREFs of MiInSwapStore @ 0x1406A4C38
 * Callers:
 *     MmInSwapWorkingSet @ 0x1400F3B7C (MmInSwapWorkingSet.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     ExQueueWorkItemToPartition @ 0x140080198 (ExQueueWorkItemToPartition.c)
 *     KeQueryPriorityThread @ 0x14009AD40 (KeQueryPriorityThread.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiInSwapStoreContextDereference @ 0x1406A4DD8 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  char *PoolWithTag; // rax
  char *v3; // rdi
  __int64 ProcessPartition; // rax
  int v5; // r8d
  int v6; // edx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x73536D4Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  KeInitializeEvent((PRKEVENT)(v3 + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 2) = MiInSwapStoreWorker;
  *((_QWORD *)v3 + 3) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *((_QWORD *)v3 + 4) = Object;
  *((_DWORD *)v3 + 16) = 2;
  KeQueryPriorityThread(KeGetCurrentThread());
  ProcessPartition = MiGetProcessPartition((__int64)Object);
  v6 = v5 + 1;
  if ( v5 >= 15 )
    v6 = v5;
  ExQueueWorkItemToPartition(v3, v6 + 32, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 168));
  KeWaitForSingleObject(v3 + 40, WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference(v3);
  return 0LL;
}
