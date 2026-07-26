/*
 * XREFs of ndisCreatePMAddRemoveWorkItem @ 0x1C0049FE0
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C0016A60 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisCreatePMAddRemoveWorkItem(__int64 a1, _LIST_ENTRY *a2, void (__fastcall *a3)(void *))
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v7; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    ndisReferenceMiniport(a1);
    v7[1].WorkerRoutine = a3;
    v7[1].List.Flink = (_LIST_ENTRY *)a1;
    v7[1].List.Blink = a2;
    v7->List.Flink = 0LL;
    v7->WorkerRoutine = (void (__fastcall *)(void *))ndisPMAddRemoveAsync;
    v7->Parameter = v7;
    ExQueueWorkItem(v7, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_(0x46u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    return 3221225626LL;
  }
}
