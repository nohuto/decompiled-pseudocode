/*
 * XREFs of ndisRequestPowerResume @ 0x1C0075358
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C0073C90 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ndisRequestDevicePowerD0 @ 0x1C0011040 (ndisRequestDevicePowerD0.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C007463C (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisMoveLinkedList @ 0x1C0074D50 (ndisMoveLinkedList.c)
 *     ndisReplayRecvNbls @ 0x1C007521C (ndisReplayRecvNbls.c)
 */

void __fastcall ndisRequestPowerResume(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v3; // al
  int v4; // ecx
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rsi
  struct _NET_BUFFER_LIST *v7; // r14
  __int64 v8; // r8
  struct _NET_BUFFER_LIST *Alignment; // rax
  _QWORD *v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 4488);
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
        if ( byte_1C009FE30 && (*(_DWORD *)(a1 + 5916) & 2) != 0 )
          PktMonClientNblDropNdis(a1 + 5864, (__int64)v6, v8, 2LL, 0xC023002F);
        Alignment = v6;
        do
        {
          Alignment->Status = -1073676271;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        ndisMSendNetBufferListsCompleteInternal(a1, v6, 0, 0);
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
