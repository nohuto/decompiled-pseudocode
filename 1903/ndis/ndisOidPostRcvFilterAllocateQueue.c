/*
 * XREFs of ndisOidPostRcvFilterAllocateQueue @ 0x1C005F320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C005EE58 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C005F2E4 (ndisFindReceiveQueueByQueueId.c)
 */

void __fastcall ndisOidPostRcvFilterAllocateQueue(__int64 a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  __int64 v4; // rsi
  int v5; // edx
  __int64 *ReceiveQueueByQueueId; // rdx
  KIRQL v7; // r10

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      16,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v3,
      v1);
  if ( v3 && *(_DWORD *)(v1 + 48) >= 0x43Cu )
  {
    v4 = *(_QWORD *)(v1 + 40);
    if ( *(_DWORD *)(a1 + 40) )
    {
      v5 = *(_DWORD *)(v4 + 12);
      if ( v5 )
        ndisFreeReceiveQueue(v3, v5);
    }
    else
    {
      KeAcquireSpinLockRaiseToDpc(&v3->Lock);
      v3->MiniportThread = KeGetCurrentThread();
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId((__int64)v3, *(_DWORD *)(v4 + 12));
      *((_DWORD *)ReceiveQueueByQueueId + 13) = 2;
      *((_DWORD *)ReceiveQueueByQueueId + 43) = *(_DWORD *)(v4 + 44);
      if ( *(_BYTE *)(v4 + 1) >= 2u && *(_WORD *)(v4 + 2) >= 0x444u && *(_DWORD *)(v1 + 48) >= 0x444u )
        *((_DWORD *)ReceiveQueueByQueueId + 304) = *(_DWORD *)(v4 + 1088);
      v3->MiniportThread = 0LL;
      KeReleaseSpinLock(&v3->Lock, v7);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      17,
      (struct _GUID *)&WPP_618aa347117e3c7f045079f88f1cf08e_Traceguids,
      (char)v3,
      *(_DWORD *)(a1 + 40));
}
