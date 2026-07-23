/*
 * XREFs of KeInitializeUmsThread @ 0x140846574
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x1402EA044 (PspAttachThreadToUmsCompletionList.c)
 *     PspUmsInitThread @ 0x14088BF6C (PspUmsInitThread.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeInitializeQueue @ 0x140121AA0 (KeInitializeQueue.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeInitializeUmsThread(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *PoolWithTag; // rax
  char *v10; // rbx
  unsigned int v12; // edi

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736D554Bu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_QWORD *)v10 = a5;
  *((_QWORD *)v10 + 1) = a3;
  *((_QWORD *)v10 + 2) = a4;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)v10 + 2, SynchronizationEvent, 0);
  else
    KeInitializeQueue((PRKQUEUE)(v10 + 32), 1u);
  v12 = (KeFeatureBits & 0x10000000) == 0 ? 0xC00000BB : 0;
  if ( (KeFeatureBits & 0x10000000) != 0 )
  {
    *(_QWORD *)(a1 + 496) = v10;
    *(_QWORD *)(a1 + 504) = -1LL;
    _interlockedbittestandset((volatile signed __int32 *)a1, 31 - (a2 != 0));
  }
  else
  {
    ExFreePoolWithTag(v10, 0);
  }
  return v12;
}
