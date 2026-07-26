/*
 * XREFs of ndisUpdateRcvFilterQueueParameters @ 0x1C0061458
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisOidPostRcvFilterQueueParameters @ 0x1C005F7C0 (ndisOidPostRcvFilterQueueParameters.c)
 * Callees:
 *     ndisFindReceiveQueueByQueueId @ 0x1C005F2E4 (ndisFindReceiveQueueByQueueId.c)
 */

char __fastcall ndisUpdateRcvFilterQueueParameters(KSPIN_LOCK *a1, __int64 a2)
{
  KIRQL v4; // r10
  unsigned int v5; // edx
  __int64 *ReceiveQueueByQueueId; // rdx
  char v7; // bl
  int v8; // eax

  v4 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId((__int64)a1, v5);
  else
    ReceiveQueueByQueueId = (__int64 *)a1[546];
  if ( ReceiveQueueByQueueId )
  {
    v8 = *(_DWORD *)(a2 + 4);
    if ( (v8 & 0x10000) != 0 )
    {
      *((_DWORD *)ReceiveQueueByQueueId + 33) = (unsigned __int16)v8;
      v8 = *(_DWORD *)(a2 + 4);
    }
    if ( (v8 & 0x20000) != 0 )
    {
      *(_OWORD *)(ReceiveQueueByQueueId + 19) = *(_OWORD *)(a2 + 24);
      *((_DWORD *)ReceiveQueueByQueueId + 43) = *(_DWORD *)(a2 + 44);
      v8 = *(_DWORD *)(a2 + 4);
    }
    if ( (v8 & 0x40000) != 0 )
      *((_DWORD *)ReceiveQueueByQueueId + 42) = *(_DWORD *)(a2 + 40);
    if ( *(_BYTE *)(a2 + 1) >= 2u && (*(_DWORD *)(a2 + 4) & 0x100000) != 0 )
      *((_DWORD *)ReceiveQueueByQueueId + 304) = *(_DWORD *)(a2 + 1088);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  a1[65] = 0LL;
  KeReleaseSpinLock(a1 + 12, v4);
  return v7;
}
