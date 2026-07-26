/*
 * XREFs of ndisFreeReceiveQueue @ 0x1C003B594
 * Callers:
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C003B690 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPostRcvFilterFreeQueue @ 0x1C003B930 (ndisOidPostRcvFilterFreeQueue.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B3C8 (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003B564 (ndisFindReceiveQueueByQueueId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisFreeReceiveQueue(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 *ReceiveQueueByQueueId; // rax
  __int64 *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
    WPP_SF_qD(0x12u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2688170;
  ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  v6 = ReceiveQueueByQueueId;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v6 )
  {
    if ( (unsigned int)ndisDereferenceReceiveQueue(v6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
    WPP_SF_qdD(0x13u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, a1, a2, v4);
  return v4;
}
