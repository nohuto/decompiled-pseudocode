/*
 * XREFs of ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005F02C
 * Callers:
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C005F4F0 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPostRcvFilterFreeQueue @ 0x1C005F7D0 (ndisOidPostRcvFilterFreeQueue.c)
 * Callees:
 *     ?ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C005EE0C (-ndisDereferenceReceiveQueue@@YAKPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005F150 (WPP_RECORDER_SF_qdD_ea_1C005F150.c)
 *     WPP_RECORDER_SF_ql @ 0x1C005F288 (WPP_RECORDER_SF_ql_ea_1C005F288.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C005F4B8 (ndisFindReceiveQueueByQueueId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C902C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisFreeReceiveQueue(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // edi
  __int64 ReceiveQueueByQueueId; // rax
  _QWORD *v6; // r14
  KIRQL v7; // r10
  int v8; // edx
  char v10; // [rsp+30h] [rbp-28h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_ql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      25,
      18,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)a1,
      v10);
  }
  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(a1, v2);
  a1->MiniportThread = 0LL;
  v6 = (_QWORD *)ReceiveQueueByQueueId;
  KeReleaseSpinLock(&a1->Lock, v7);
  if ( v6 )
  {
    if ( (unsigned int)ndisDereferenceReceiveQueue(v6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  else
  {
    v4 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      25,
      19,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)a1,
      v2,
      v4);
  return v4;
}
