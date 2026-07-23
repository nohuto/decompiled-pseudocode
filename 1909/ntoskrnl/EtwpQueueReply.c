/*
 * XREFs of EtwpQueueReply @ 0x1406AA9DC
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1405D4330 (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x1406AA8FC (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KeInsertQueue @ 0x1400FD170 (KeInsertQueue.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x14069434C (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x1406AAAE4 (EtwpAllocDataBlock.c)
 */

__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v5; // rsi

  v3 = EtwpAllocDataBlock(a2[1], a2);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x38uLL);
      v5[1].Flink = 0LL;
      KeInsertQueue(Queue, v5);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      EtwpUnreferenceDataBlock(0LL);
    }
  }
  return (unsigned int)v3;
}
