/*
 * XREFs of NdisMResetMiniport @ 0x1C0098800
 * Callers:
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall NdisMResetMiniport(__int64 a1)
{
  _QWORD *PoolWithTag; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      17,
      245,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3760) + 216LL) && (unsigned __int8)ndisReferenceMiniport(a1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
    if ( PoolWithTag )
    {
      *PoolWithTag = a1;
      PoolWithTag[1] = ndisQueuedResetMiniport;
      ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    }
    else
    {
      ndisDereferenceMiniport(a1, 8u);
    }
  }
}
