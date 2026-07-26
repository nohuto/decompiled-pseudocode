/*
 * XREFs of ndisCreatePMPdcTaskClientWorkItem @ 0x1C0072E5C
 * Callers:
 *     ndisMEvaluateMagicPacketWake @ 0x1C00732F8 (ndisMEvaluateMagicPacketWake.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ndisCreatePMPdcTaskClientWorkItem(__int64 a1)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v3; // edx
  struct _WORK_QUEUE_ITEM *v4; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->List.Blink = 0LL;
    PoolWithTag->WorkerRoutine = 0LL;
    PoolWithTag->Parameter = 0LL;
    PoolWithTag[1].List.Flink = (_LIST_ENTRY *)a1;
    if ( (unsigned __int8)ndisReferenceMiniport(a1) )
    {
      v4->List.Flink = 0LL;
      v4->WorkerRoutine = (void (__fastcall *)(void *))ndisPMPDCTaskClient;
      v4->Parameter = v4;
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      ExFreePoolWithTag(v4, 0);
    }
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        14,
        135,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
    }
    return 3221225626LL;
  }
}
