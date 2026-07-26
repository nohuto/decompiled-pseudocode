/*
 * XREFs of ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B60FC
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B6040 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendStop @ 0x1C00B95C8 (ndisSelectiveSuspendStop.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C011BC70 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00B7E2C (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisMoveLinkedList @ 0x1C00B85A4 (ndisMoveLinkedList.c)
 *     ndisReplayDirectOids @ 0x1C00B8A48 (ndisReplayDirectOids.c)
 *     ndisReplayRecvNbls @ 0x1C00B8AD4 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C00B8B38 (ndisReplaySendNbls.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisWdfSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, char a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _NET_BUFFER_LIST *First; // rsi
  _NET_BUFFER_LIST *v10; // r14
  KIRQL v11; // r9
  int v12; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v14[0] = 0LL;
  v14[1] = 0LL;
  KeSetEvent(&SelectiveSuspend->WdfD0LockedForSSEvent, 0, 0);
  LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  v7 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->LastCancelTime.QuadPart) / 10000;
  SelectiveSuspend->TotalResumeLatencyMs += v7;
  SelectiveSuspend->LastResumeLatencyMs = v7;
  v8 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->LastSuspendTime.QuadPart) / 10000;
  SelectiveSuspend->TotalSuspendedTimeMs += v8;
  SelectiveSuspend->LastSuspendIntervalMs = v8;
  First = SelectiveSuspend->PendingSendNblQueue.First;
  SelectiveSuspend->PendingSendNblQueue.First = 0LL;
  SelectiveSuspend->PendingSendNblQueue.Last = &SelectiveSuspend->PendingSendNblQueue.First;
  v10 = SelectiveSuspend->PendingReceiveNblQueue.First;
  SelectiveSuspend->PendingReceiveNblQueue.First = 0LL;
  SelectiveSuspend->PendingReceiveNblQueue.Last = &SelectiveSuspend->PendingReceiveNblQueue.First;
  ndisMoveLinkedList(v14, &SelectiveSuspend->PendingDirectOidQueue, 0x346DC5D63886594BLL, v6);
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
  if ( First )
  {
    if ( a3 )
    {
      if ( byte_1C00E5E20 && (*((_DWORD *)&a1->PktMonComp + 3) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5800, (_DWORD)First, v12, 2, -1071448017, -536866806);
      Alignment = First;
      do
      {
        Alignment->Status = -1073676271;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal(a1, First, 0);
    }
    else
    {
      ndisReplaySendNbls(a1, First, 1);
    }
  }
  if ( v10 )
    ndisReplayRecvNbls(a1, v10);
  if ( a3 )
    ndisCancelDequeuedDirectOidRequests((char)a1);
  else
    ndisReplayDirectOids((char)a1);
}
