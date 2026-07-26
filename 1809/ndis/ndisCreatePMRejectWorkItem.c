/*
 * XREFs of ndisCreatePMRejectWorkItem @ 0x1C0025828
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C0014904 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00256CC (ndisPMAddWOLPattern.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(__int64 a1, _LIST_ENTRY *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v8; // rbx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v8[1].List.Flink = (_LIST_ENTRY *)a1;
    v8[1].List.Blink = a2;
    LODWORD(v8[1].WorkerRoutine) = a3;
    ndisReferenceMiniport(a1);
    v8->List.Flink = 0LL;
    v8->WorkerRoutine = (void (__fastcall *)(void *))ndisPMRejectAsync;
    v8->Parameter = v8;
    ExQueueWorkItem(v8, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  if ( (unsigned __int8)byte_1C00A025D >= 2u )
    WPP_SF_(73LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
  return 3221225626LL;
}
