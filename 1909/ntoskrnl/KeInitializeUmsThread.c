/*
 * XREFs of KeInitializeUmsThread @ 0x140880014
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x140306EC4 (PspAttachThreadToUmsCompletionList.c)
 *     PspUmsInitThread @ 0x1408C8AAC (PspUmsInitThread.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeInitializeQueue @ 0x140124310 (KeInitializeQueue.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeInitializeUmsThread(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *PoolWithTag; // rax
  unsigned int v10; // edi
  char *v11; // rbx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736D554Bu);
  v10 = 0;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag + 24, 0, 0x70uLL);
  *(_QWORD *)v11 = a5;
  *((_QWORD *)v11 + 1) = a3;
  *((_QWORD *)v11 + 2) = a4;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)v11 + 2, SynchronizationEvent, 0);
  else
    KeInitializeQueue((PRKQUEUE)(v11 + 32), 1u);
  if ( (KeFeatureBits & 0x10000000) != 0 )
  {
    *(_QWORD *)(a1 + 496) = v11;
    *(_QWORD *)(a1 + 504) = -1LL;
    _interlockedbittestandset((volatile signed __int32 *)a1, 31 - (a2 != 0));
  }
  else
  {
    v10 = -1073741637;
    ExFreePoolWithTag(v11, 0);
  }
  return v10;
}
