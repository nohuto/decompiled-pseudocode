/*
 * XREFs of ndisRequestPowerResume @ 0x1C00B8C10
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C00B6CC0 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0013A5C (ndisRequestDevicePowerD0.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00B7E2C (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisMoveLinkedList @ 0x1C00B85A4 (ndisMoveLinkedList.c)
 *     ndisReplayRecvNbls @ 0x1C00B8AD4 (ndisReplayRecvNbls.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisRequestPowerResume(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // al
  int v4; // ecx
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rsi
  struct _NET_BUFFER_LIST *v7; // r14
  int v8; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  _QWORD *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 4448);
  v10[0] = 0LL;
  v10[1] = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  v4 = *(_DWORD *)(v1 + 504);
  v5 = v3;
  if ( (v4 & 0x30) == 0x10 )
  {
    if ( (v4 & 0x400) != 0 )
    {
      KeSetEvent((PRKEVENT)(v1 + 248), 0, 0);
      v6 = *(struct _NET_BUFFER_LIST **)(v1 + 544);
      *(_QWORD *)(v1 + 544) = 0LL;
      *(_QWORD *)(v1 + 552) = v1 + 544;
      v7 = *(struct _NET_BUFFER_LIST **)(v1 + 560);
      *(_QWORD *)(v1 + 560) = 0LL;
      *(_QWORD *)(v1 + 568) = v1 + 560;
      ndisMoveLinkedList(v10, v1 + 584);
      KeReleaseSpinLock((PKSPIN_LOCK)v1, v5);
      if ( v6 )
      {
        if ( byte_1C00E5E20 && (*(_DWORD *)(a1 + 5812) & 2) != 0 )
          PktMonClientNblDropNdis(a1 + 5800, (_DWORD)v6, v8, 2, -1071448017, -536866807);
        Alignment = v6;
        do
        {
          Alignment->Status = -1073676271;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        ndisMSendNetBufferListsCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v6, 0);
      }
      if ( v7 )
        ndisReplayRecvNbls((_QWORD *)a1, v7);
      ndisCancelDequeuedDirectOidRequests(a1, v10);
    }
    else
    {
      *(_DWORD *)(v1 + 504) = v4 | 0x20;
      KeReleaseSpinLock((PKSPIN_LOCK)v1, v3);
      ndisRequestDevicePowerD0(a1, 8u);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v1, v3);
  }
}
