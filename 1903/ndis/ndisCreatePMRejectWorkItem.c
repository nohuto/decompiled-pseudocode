/*
 * XREFs of ndisCreatePMRejectWorkItem @ 0x1C001D65C
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(__int64 a1, _LIST_ENTRY *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v8; // edx
  struct _WORK_QUEUE_ITEM *v9; // rbx

  if ( !a2 )
    return 0LL;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6977444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v9[1].List.Flink = (_LIST_ENTRY *)a1;
    v9[1].List.Blink = a2;
    LODWORD(v9[1].WorkerRoutine) = a3;
    ndisReferenceMiniport(a1);
    v9->List.Flink = 0LL;
    v9->WorkerRoutine = (void (__fastcall *)(void *))ndisPMRejectAsync;
    v9->Parameter = v9;
    ExQueueWorkItem(v9, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      14,
      73,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
  }
  return 3221225626LL;
}
