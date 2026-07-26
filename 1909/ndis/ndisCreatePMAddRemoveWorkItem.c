/*
 * XREFs of ndisCreatePMAddRemoveWorkItem @ 0x1C0072C94
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisCreatePMAddRemoveWorkItem(__int64 a1, _LIST_ENTRY *a2, void (__fastcall *a3)(void *))
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v7; // edx
  struct _WORK_QUEUE_ITEM *v8; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    ndisReferenceMiniport(a1);
    v8[1].WorkerRoutine = a3;
    v8[1].List.Flink = (_LIST_ENTRY *)a1;
    v8[1].List.Blink = a2;
    v8->List.Flink = 0LL;
    v8->WorkerRoutine = (void (__fastcall *)(void *))ndisPMAddRemoveAsync;
    v8->Parameter = v8;
    ExQueueWorkItem(v8, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        70,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
    }
    return 3221225626LL;
  }
}
